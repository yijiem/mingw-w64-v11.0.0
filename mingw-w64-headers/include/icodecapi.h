/*** Autogenerated by WIDL 8.5 from include/icodecapi.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __icodecapi_h__
#define __icodecapi_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __ICodecAPI_FWD_DEFINED__
#define __ICodecAPI_FWD_DEFINED__
typedef interface ICodecAPI ICodecAPI;
#ifdef __cplusplus
interface ICodecAPI;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

struct CodecAPIEventData {
    GUID guid;
    DWORD dataLength;
    DWORD reserved[3];
};

#ifndef __IStream_FWD_DEFINED__
#define __IStream_FWD_DEFINED__
typedef interface IStream IStream;
#ifdef __cplusplus
interface IStream;
#endif /* __cplusplus */
#endif


/*****************************************************************************
 * ICodecAPI interface
 */
#ifndef __ICodecAPI_INTERFACE_DEFINED__
#define __ICodecAPI_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICodecAPI, 0x901db4c7, 0x31ce, 0x41a2, 0x85,0xdc, 0x8f,0xa0,0xbf,0x41,0xb8,0xda);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("901db4c7-31ce-41a2-85dc-8fa0bf41b8da")
ICodecAPI : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE IsSupported(
        const GUID *Api) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsModifiable(
        const GUID *Api) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetParameterRange(
        const GUID *Api,
        VARIANT *ValueMin,
        VARIANT *ValueMax,
        VARIANT *SteppingDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetParameterValues(
        const GUID *Api,
        VARIANT **Values,
        ULONG *ValuesCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDefaultValue(
        const GUID *Api,
        VARIANT *Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetValue(
        const GUID *Api,
        VARIANT *Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetValue(
        const GUID *Api,
        VARIANT *Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterForEvent(
        const GUID *Api,
        LONG_PTR userData) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnregisterForEvent(
        const GUID *Api) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAllDefaults(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetValueWithNotify(
        const GUID *Api,
        VARIANT *Value,
        GUID **ChangedParam,
        ULONG *ChangedParamCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAllDefaultsWithNotify(
        GUID **ChangedParam,
        ULONG *ChangedParamCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAllSettings(
        IStream *a) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAllSettings(
        IStream *a) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAllSettingsWithNotify(
        IStream *a,
        GUID **ChangedParam,
        ULONG *ChangedParamCount) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICodecAPI, 0x901db4c7, 0x31ce, 0x41a2, 0x85,0xdc, 0x8f,0xa0,0xbf,0x41,0xb8,0xda)
#endif
#else
typedef struct ICodecAPIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICodecAPI *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICodecAPI *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICodecAPI *This);

    /*** ICodecAPI methods ***/
    HRESULT (STDMETHODCALLTYPE *IsSupported)(
        ICodecAPI *This,
        const GUID *Api);

    HRESULT (STDMETHODCALLTYPE *IsModifiable)(
        ICodecAPI *This,
        const GUID *Api);

    HRESULT (STDMETHODCALLTYPE *GetParameterRange)(
        ICodecAPI *This,
        const GUID *Api,
        VARIANT *ValueMin,
        VARIANT *ValueMax,
        VARIANT *SteppingDelta);

    HRESULT (STDMETHODCALLTYPE *GetParameterValues)(
        ICodecAPI *This,
        const GUID *Api,
        VARIANT **Values,
        ULONG *ValuesCount);

    HRESULT (STDMETHODCALLTYPE *GetDefaultValue)(
        ICodecAPI *This,
        const GUID *Api,
        VARIANT *Value);

    HRESULT (STDMETHODCALLTYPE *GetValue)(
        ICodecAPI *This,
        const GUID *Api,
        VARIANT *Value);

    HRESULT (STDMETHODCALLTYPE *SetValue)(
        ICodecAPI *This,
        const GUID *Api,
        VARIANT *Value);

    HRESULT (STDMETHODCALLTYPE *RegisterForEvent)(
        ICodecAPI *This,
        const GUID *Api,
        LONG_PTR userData);

    HRESULT (STDMETHODCALLTYPE *UnregisterForEvent)(
        ICodecAPI *This,
        const GUID *Api);

    HRESULT (STDMETHODCALLTYPE *SetAllDefaults)(
        ICodecAPI *This);

    HRESULT (STDMETHODCALLTYPE *SetValueWithNotify)(
        ICodecAPI *This,
        const GUID *Api,
        VARIANT *Value,
        GUID **ChangedParam,
        ULONG *ChangedParamCount);

    HRESULT (STDMETHODCALLTYPE *SetAllDefaultsWithNotify)(
        ICodecAPI *This,
        GUID **ChangedParam,
        ULONG *ChangedParamCount);

    HRESULT (STDMETHODCALLTYPE *GetAllSettings)(
        ICodecAPI *This,
        IStream *a);

    HRESULT (STDMETHODCALLTYPE *SetAllSettings)(
        ICodecAPI *This,
        IStream *a);

    HRESULT (STDMETHODCALLTYPE *SetAllSettingsWithNotify)(
        ICodecAPI *This,
        IStream *a,
        GUID **ChangedParam,
        ULONG *ChangedParamCount);

    END_INTERFACE
} ICodecAPIVtbl;

interface ICodecAPI {
    CONST_VTBL ICodecAPIVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICodecAPI_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICodecAPI_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICodecAPI_Release(This) (This)->lpVtbl->Release(This)
/*** ICodecAPI methods ***/
#define ICodecAPI_IsSupported(This,Api) (This)->lpVtbl->IsSupported(This,Api)
#define ICodecAPI_IsModifiable(This,Api) (This)->lpVtbl->IsModifiable(This,Api)
#define ICodecAPI_GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta) (This)->lpVtbl->GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta)
#define ICodecAPI_GetParameterValues(This,Api,Values,ValuesCount) (This)->lpVtbl->GetParameterValues(This,Api,Values,ValuesCount)
#define ICodecAPI_GetDefaultValue(This,Api,Value) (This)->lpVtbl->GetDefaultValue(This,Api,Value)
#define ICodecAPI_GetValue(This,Api,Value) (This)->lpVtbl->GetValue(This,Api,Value)
#define ICodecAPI_SetValue(This,Api,Value) (This)->lpVtbl->SetValue(This,Api,Value)
#define ICodecAPI_RegisterForEvent(This,Api,userData) (This)->lpVtbl->RegisterForEvent(This,Api,userData)
#define ICodecAPI_UnregisterForEvent(This,Api) (This)->lpVtbl->UnregisterForEvent(This,Api)
#define ICodecAPI_SetAllDefaults(This) (This)->lpVtbl->SetAllDefaults(This)
#define ICodecAPI_SetValueWithNotify(This,Api,Value,ChangedParam,ChangedParamCount) (This)->lpVtbl->SetValueWithNotify(This,Api,Value,ChangedParam,ChangedParamCount)
#define ICodecAPI_SetAllDefaultsWithNotify(This,ChangedParam,ChangedParamCount) (This)->lpVtbl->SetAllDefaultsWithNotify(This,ChangedParam,ChangedParamCount)
#define ICodecAPI_GetAllSettings(This,a) (This)->lpVtbl->GetAllSettings(This,a)
#define ICodecAPI_SetAllSettings(This,a) (This)->lpVtbl->SetAllSettings(This,a)
#define ICodecAPI_SetAllSettingsWithNotify(This,a,ChangedParam,ChangedParamCount) (This)->lpVtbl->SetAllSettingsWithNotify(This,a,ChangedParam,ChangedParamCount)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ICodecAPI_QueryInterface(ICodecAPI* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ICodecAPI_AddRef(ICodecAPI* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ICodecAPI_Release(ICodecAPI* This) {
    return This->lpVtbl->Release(This);
}
/*** ICodecAPI methods ***/
static __WIDL_INLINE HRESULT ICodecAPI_IsSupported(ICodecAPI* This,const GUID *Api) {
    return This->lpVtbl->IsSupported(This,Api);
}
static __WIDL_INLINE HRESULT ICodecAPI_IsModifiable(ICodecAPI* This,const GUID *Api) {
    return This->lpVtbl->IsModifiable(This,Api);
}
static __WIDL_INLINE HRESULT ICodecAPI_GetParameterRange(ICodecAPI* This,const GUID *Api,VARIANT *ValueMin,VARIANT *ValueMax,VARIANT *SteppingDelta) {
    return This->lpVtbl->GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta);
}
static __WIDL_INLINE HRESULT ICodecAPI_GetParameterValues(ICodecAPI* This,const GUID *Api,VARIANT **Values,ULONG *ValuesCount) {
    return This->lpVtbl->GetParameterValues(This,Api,Values,ValuesCount);
}
static __WIDL_INLINE HRESULT ICodecAPI_GetDefaultValue(ICodecAPI* This,const GUID *Api,VARIANT *Value) {
    return This->lpVtbl->GetDefaultValue(This,Api,Value);
}
static __WIDL_INLINE HRESULT ICodecAPI_GetValue(ICodecAPI* This,const GUID *Api,VARIANT *Value) {
    return This->lpVtbl->GetValue(This,Api,Value);
}
static __WIDL_INLINE HRESULT ICodecAPI_SetValue(ICodecAPI* This,const GUID *Api,VARIANT *Value) {
    return This->lpVtbl->SetValue(This,Api,Value);
}
static __WIDL_INLINE HRESULT ICodecAPI_RegisterForEvent(ICodecAPI* This,const GUID *Api,LONG_PTR userData) {
    return This->lpVtbl->RegisterForEvent(This,Api,userData);
}
static __WIDL_INLINE HRESULT ICodecAPI_UnregisterForEvent(ICodecAPI* This,const GUID *Api) {
    return This->lpVtbl->UnregisterForEvent(This,Api);
}
static __WIDL_INLINE HRESULT ICodecAPI_SetAllDefaults(ICodecAPI* This) {
    return This->lpVtbl->SetAllDefaults(This);
}
static __WIDL_INLINE HRESULT ICodecAPI_SetValueWithNotify(ICodecAPI* This,const GUID *Api,VARIANT *Value,GUID **ChangedParam,ULONG *ChangedParamCount) {
    return This->lpVtbl->SetValueWithNotify(This,Api,Value,ChangedParam,ChangedParamCount);
}
static __WIDL_INLINE HRESULT ICodecAPI_SetAllDefaultsWithNotify(ICodecAPI* This,GUID **ChangedParam,ULONG *ChangedParamCount) {
    return This->lpVtbl->SetAllDefaultsWithNotify(This,ChangedParam,ChangedParamCount);
}
static __WIDL_INLINE HRESULT ICodecAPI_GetAllSettings(ICodecAPI* This,IStream *a) {
    return This->lpVtbl->GetAllSettings(This,a);
}
static __WIDL_INLINE HRESULT ICodecAPI_SetAllSettings(ICodecAPI* This,IStream *a) {
    return This->lpVtbl->SetAllSettings(This,a);
}
static __WIDL_INLINE HRESULT ICodecAPI_SetAllSettingsWithNotify(ICodecAPI* This,IStream *a,GUID **ChangedParam,ULONG *ChangedParamCount) {
    return This->lpVtbl->SetAllSettingsWithNotify(This,a,ChangedParam,ChangedParamCount);
}
#endif
#endif

#endif


#endif  /* __ICodecAPI_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __icodecapi_h__ */
