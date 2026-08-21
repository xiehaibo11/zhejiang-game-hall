.class public abstract Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub;
.super Landroid/os/Binder;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator"

.field static final TRANSACTION_calculateRetryDelayTime:I = 0x1


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 25
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator"

    .line 26
    invoke-virtual {p0, p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator"

    .line 37
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 38
    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    if-eqz v1, :cond_1

    .line 39
    check-cast v0, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    return-object v0

    .line 41
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;
    .locals 1

    .line 123
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;)Z
    .locals 1

    .line 116
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    .line 117
    sput-object p0, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
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

    const/4 v0, 0x1

    const-string v1, "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator"

    if-eq p1, v0, :cond_1

    const v2, 0x5f4e5446

    if-eq p1, v2, :cond_0

    .line 71
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 54
    :cond_0
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 59
    :cond_1
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 61
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 63
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p2

    .line 64
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub;->calculateRetryDelayTime(II)J

    move-result-wide p1

    .line 65
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 66
    invoke-virtual {p3, p1, p2}, Landroid/os/Parcel;->writeLong(J)V

    return v0
.end method
