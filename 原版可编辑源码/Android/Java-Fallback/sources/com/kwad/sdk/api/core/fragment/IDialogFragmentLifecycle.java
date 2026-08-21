package com.kwad.sdk.api.core.fragment;

interface IDialogFragmentLifecycle extends com.kwad.sdk.api.core.fragment.IFragmentLifecycle {
    void onCancel(android.content.DialogInterface r1);

    android.app.Dialog onCreateDialog(android.os.Bundle r1);

    void onDismiss(android.content.DialogInterface r1);
}
