.class Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub$Proxy;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Proxy"
.end annotation


# static fields
.field public static sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;


# instance fields
.field private mRemote:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 112
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 113
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-object v0
.end method

.method public getInterfaceDescriptor()Ljava/lang/String;
    .locals 1

    const-string v0, "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"

    return-object v0
.end method

.method public getNotifyProcessName()Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 174
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 175
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"

    .line 178
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 179
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x3

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 180
    invoke-static {}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 181
    invoke-static {}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;->getNotifyProcessName()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 187
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 188
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 183
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 184
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 187
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 188
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 187
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 188
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public interceptAfterNotificationSuccess(Z)Z
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 153
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 154
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"

    .line 157
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p1, :cond_0

    move v4, v2

    goto :goto_0

    :cond_0
    move v4, v3

    .line 158
    :goto_0
    invoke-virtual {v0, v4}, Landroid/os/Parcel;->writeInt(I)V

    .line 159
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v5, 0x2

    invoke-interface {v4, v5, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v4

    if-nez v4, :cond_1

    .line 160
    invoke-static {}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 161
    invoke-static {}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;->interceptAfterNotificationSuccess(Z)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 167
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 168
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 163
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 164
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_2

    goto :goto_1

    :cond_2
    move v2, v3

    .line 167
    :goto_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 168
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    :catchall_0
    move-exception p1

    .line 167
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 168
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 125
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 126
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"

    .line 128
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 129
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p2, :cond_0

    .line 131
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 132
    invoke-virtual {p2, v0, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 135
    :cond_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 137
    :goto_0
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 138
    invoke-virtual {v0, p4}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 139
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    invoke-interface {v4, v2, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 140
    invoke-static {}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 141
    invoke-static {}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;->onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 147
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 148
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 144
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 147
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 148
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 147
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 148
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method
