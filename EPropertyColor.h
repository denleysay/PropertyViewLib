/* Generated by Together */

#ifndef EPROPERTYCOLOR_H
#define EPROPERTYCOLOR_H

#include "EIconTextButtonProperty.h"

class EPropListCtrl;
class IPropertyHost;

class EPropertyColor : public EIconTextButtonProperty
{

public:    

    EPropertyColor( IPropertyHost* pHost , const CString& sName , COLORREF* pProperty , bool bEnabled );
	virtual EPropertyColor::~EPropertyColor();

	virtual bool OnCommand( EPropWnd* pParent , WPARAM wParam , LPARAM lParam );

	virtual int GetIconWidth();
	virtual bool HasButton();

	virtual void DrawIcon( CDC* pDC , EPropWnd* pParent , const CRect& Rect );
	CString GetTextValue();

	virtual bool OnPropApply();		//return true if anything changed

protected:

	virtual bool HasEdit();

};
#endif //EPROPERTYCOLOR_H