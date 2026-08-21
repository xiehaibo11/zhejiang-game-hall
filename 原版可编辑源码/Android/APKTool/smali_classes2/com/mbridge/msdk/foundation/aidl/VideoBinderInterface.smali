.class public interface abstract Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;
.super Ljava/lang/Object;
.source "VideoBinderInterface.java"

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;,
        Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Default;
    }
.end annotation


# virtual methods
.method public abstract registerListener(Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract requestVideo([Ljava/lang/String;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
