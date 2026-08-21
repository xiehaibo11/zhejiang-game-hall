.class public abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub;
.super Landroid/os/Binder;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler"

.field static final TRANSACTION_cleanUpDisk:I = 0x1


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 25
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler"

    .line 26
    invoke-virtual {p0, p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler"

    .line 37
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 38
    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    if-eqz v1, :cond_1

    .line 39
    check-cast v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    return-object v0

    .line 41
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;
    .locals 1

    .line 126
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;)Z
    .locals 1

    .line 119
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    .line 120
    sput-object p0, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

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
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x1

    const-string v1, "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler"

    if-eq p1, v0, :cond_1

    const v2, 0x5f4e5446

    if-eq p1, v2, :cond_0

    .line 73
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
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v2

    .line 63
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v4

    .line 65
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;

    move-result-object v6

    move-object v1, p0

    .line 66
    invoke-virtual/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub;->cleanUpDisk(JJLcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;)Z

    move-result p1

    .line 67
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 68
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v0
.end method
