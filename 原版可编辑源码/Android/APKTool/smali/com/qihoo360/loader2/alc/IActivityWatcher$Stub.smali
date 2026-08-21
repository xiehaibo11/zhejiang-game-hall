.class public abstract Lcom/qihoo360/loader2/alc/IActivityWatcher$Stub;
.super Landroid/os/Binder;
.source "IActivityWatcher.java"

# interfaces
.implements Lcom/qihoo360/loader2/alc/IActivityWatcher;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/alc/IActivityWatcher;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "android.app.IActivityWatcher"

.field static final TRANSACTION_ACTIVITY_RESUMING:I = 0x1

.field static final TRANSACTION_CLOSING_SYSTEM_DIALOGS:I = 0x2


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 35
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "android.app.IActivityWatcher"

    .line 36
    invoke-virtual {p0, p0, v0}, Lcom/qihoo360/loader2/alc/IActivityWatcher$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 0

    return-object p0
.end method

.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const-string v0, "android.app.IActivityWatcher"

    const/4 v1, 0x1

    if-eq p1, v1, :cond_2

    const/4 v2, 0x2

    if-eq p1, v2, :cond_1

    const v2, 0x5f4e5446

    if-eq p1, v2, :cond_0

    .line 66
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 48
    :cond_0
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 59
    :cond_1
    invoke-virtual {p2, v0}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 61
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 62
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/alc/IActivityWatcher$Stub;->closingSystemDialogs(Ljava/lang/String;)V

    return v1

    .line 52
    :cond_2
    invoke-virtual {p2, v0}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 54
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 55
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/alc/IActivityWatcher$Stub;->activityResuming(I)V

    return v1
.end method
