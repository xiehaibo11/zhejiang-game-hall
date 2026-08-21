.class public abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub;
.super Landroid/os/Binder;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend"

.field static final TRANSACTION_getAdditionalMonitorStatus:I = 0x3

.field static final TRANSACTION_getEventPage:I = 0x2

.field static final TRANSACTION_monitorLogSend:I = 0x1


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend"

    .line 33
    invoke-virtual {p0, p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend"

    .line 44
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 45
    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

    if-eqz v1, :cond_1

    .line 46
    check-cast v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

    return-object v0

    .line 48
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;
    .locals 1

    .line 182
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;)Z
    .locals 1

    .line 175
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    .line 176
    sput-object p0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

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

    const-string v1, "com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend"

    if-eq p1, v0, :cond_3

    const/4 v2, 0x2

    if-eq p1, v2, :cond_2

    const/4 v2, 0x3

    if-eq p1, v2, :cond_1

    const v2, 0x5f4e5446

    if-eq p1, v2, :cond_0

    .line 91
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 61
    :cond_0
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 83
    :cond_1
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 84
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub;->getAdditionalMonitorStatus()[I

    move-result-object p1

    .line 85
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 86
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeIntArray([I)V

    return v0

    .line 75
    :cond_2
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 76
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub;->getEventPage()Ljava/lang/String;

    move-result-object p1

    .line 77
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 78
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 66
    :cond_3
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 68
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 69
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub;->monitorLogSend(Ljava/lang/String;)V

    .line 70
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v0
.end method
