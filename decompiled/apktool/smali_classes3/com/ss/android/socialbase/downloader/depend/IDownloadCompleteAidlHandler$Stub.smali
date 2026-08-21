.class public abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub;
.super Landroid/os/Binder;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"

.field static final TRANSACTION_handle:I = 0x1

.field static final TRANSACTION_needHandle:I = 0x2


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 38
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"

    .line 39
    invoke-virtual {p0, p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"

    .line 50
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 51
    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

    if-eqz v1, :cond_1

    .line 52
    check-cast v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

    return-object v0

    .line 54
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;
    .locals 1

    .line 194
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;)Z
    .locals 1

    .line 187
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    .line 188
    sput-object p0, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

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
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x0

    const/4 v1, 0x1

    const-string v2, "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"

    if-eq p1, v1, :cond_3

    const/4 v3, 0x2

    if-eq p1, v3, :cond_1

    const v0, 0x5f4e5446

    if-eq p1, v0, :cond_0

    .line 101
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 67
    :cond_0
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 86
    :cond_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 88
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_2

    .line 89
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 94
    :cond_2
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub;->needHandle(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    .line 95
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 96
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 72
    :cond_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 74
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_4

    .line 75
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 80
    :cond_4
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub;->handle(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 81
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1
.end method
