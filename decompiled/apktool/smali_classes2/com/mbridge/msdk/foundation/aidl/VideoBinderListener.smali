.class public interface abstract Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;
.super Ljava/lang/Object;
.source "VideoBinderListener.java"

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;
    }
.end annotation


# virtual methods
.method public abstract onVideo(Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/ParcelFileDescriptor;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
