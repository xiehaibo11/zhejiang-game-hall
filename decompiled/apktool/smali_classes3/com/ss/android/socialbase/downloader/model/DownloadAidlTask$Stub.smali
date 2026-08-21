.class public abstract Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;
.super Landroid/os/Binder;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

.field static final TRANSACTION_getChunkStrategy:I = 0x2

.field static final TRANSACTION_getDepend:I = 0x9

.field static final TRANSACTION_getDiskSpaceHandler:I = 0xc

.field static final TRANSACTION_getDownloadCompleteAidlHandlerByIndex:I = 0x10

.field static final TRANSACTION_getDownloadCompleteHandlerSize:I = 0xf

.field static final TRANSACTION_getDownloadInfo:I = 0x1

.field static final TRANSACTION_getDownloadListenerByIndex:I = 0x4

.field static final TRANSACTION_getDownloadListenerSize:I = 0x3

.field static final TRANSACTION_getDownloadNotificationEventListener:I = 0x6

.field static final TRANSACTION_getFileProvider:I = 0xe

.field static final TRANSACTION_getForbiddenHandler:I = 0xa

.field static final TRANSACTION_getInterceptor:I = 0x8

.field static final TRANSACTION_getMonitorDepend:I = 0xd

.field static final TRANSACTION_getNotificationClickCallback:I = 0x7

.field static final TRANSACTION_getRetryDelayTimeCalculator:I = 0xb

.field static final TRANSACTION_getSingleDownloadListener:I = 0x5


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 85
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 86
    invoke-virtual {p0, p0, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 97
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 98
    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    if-eqz v1, :cond_1

    .line 99
    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    return-object v0

    .line 101
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;
    .locals 1

    .line 638
    sget-object v0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;)Z
    .locals 1

    .line 631
    sget-object v0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    .line 632
    sput-object p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

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

    const v0, 0x5f4e5446

    const/4 v1, 0x1

    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    if-eq p1, v0, :cond_e

    const/4 v0, 0x0

    packed-switch p1, :pswitch_data_0

    .line 263
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 253
    :pswitch_0
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 255
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 256
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDownloadCompleteAidlHandlerByIndex(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

    move-result-object p1

    .line 257
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_0

    .line 258
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_0
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 245
    :pswitch_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 246
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDownloadCompleteHandlerSize()I

    move-result p1

    .line 247
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 248
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 237
    :pswitch_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 238
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getFileProvider()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;

    move-result-object p1

    .line 239
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_1

    .line 240
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_1
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 229
    :pswitch_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 230
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

    move-result-object p1

    .line 231
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_2

    .line 232
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_2
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 221
    :pswitch_4
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 222
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDiskSpaceHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    move-result-object p1

    .line 223
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_3

    .line 224
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_3
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 213
    :pswitch_5
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 214
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    move-result-object p1

    .line 215
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_4

    .line 216
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_4
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 205
    :pswitch_6
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 206
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getForbiddenHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;

    move-result-object p1

    .line 207
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_5

    .line 208
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_5
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 197
    :pswitch_7
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 198
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;

    move-result-object p1

    .line 199
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_6

    .line 200
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_6
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 189
    :pswitch_8
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 190
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getInterceptor()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;

    move-result-object p1

    .line 191
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_7

    .line 192
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_7
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 181
    :pswitch_9
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 182
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    move-result-object p1

    .line 183
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_8

    .line 184
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_8
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 173
    :pswitch_a
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 174
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDownloadNotificationEventListener()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object p1

    .line 175
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_9

    .line 176
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_9
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 163
    :pswitch_b
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 165
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 166
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getSingleDownloadListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object p1

    .line 167
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_a

    .line 168
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_a
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 151
    :pswitch_c
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 153
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 155
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p2

    .line 156
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDownloadListenerByIndex(II)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object p1

    .line 157
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_b

    .line 158
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_b
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 141
    :pswitch_d
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 143
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 144
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDownloadListenerSize(I)I

    move-result p1

    .line 145
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 146
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 133
    :pswitch_e
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 134
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getChunkStrategy()Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;

    move-result-object p1

    .line 135
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_c

    .line 136
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_c
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 119
    :pswitch_f
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 120
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 121
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_d

    .line 123
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 124
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    :cond_d
    const/4 p1, 0x0

    .line 127
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    :goto_0
    return v1

    .line 114
    :cond_e
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
