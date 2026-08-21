.class public abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;
.super Landroid/os/Binder;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"

.field static final TRANSACTION_getOriginHashCode:I = 0x1

.field static final TRANSACTION_onCanceled:I = 0x8

.field static final TRANSACTION_onFailed:I = 0x7

.field static final TRANSACTION_onFirstStart:I = 0x9

.field static final TRANSACTION_onFirstSuccess:I = 0xa

.field static final TRANSACTION_onPause:I = 0x5

.field static final TRANSACTION_onPrepare:I = 0x2

.field static final TRANSACTION_onProgress:I = 0x4

.field static final TRANSACTION_onRetry:I = 0xb

.field static final TRANSACTION_onRetryDelay:I = 0xc

.field static final TRANSACTION_onStart:I = 0x3

.field static final TRANSACTION_onSuccessed:I = 0x6

.field static final TRANSACTION_onWaitingDownloadCompleteHandler:I = 0xd


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 61
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"

    .line 62
    invoke-virtual {p0, p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"

    .line 73
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 74
    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    if-eqz v1, :cond_1

    .line 75
    check-cast v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    return-object v0

    .line 77
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
    .locals 1

    .line 675
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Z
    .locals 1

    .line 668
    sget-object v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    .line 669
    sput-object p0, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

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

    const-string v2, "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"

    if-eq p1, v0, :cond_f

    const/4 v0, 0x0

    packed-switch p1, :pswitch_data_0

    .line 292
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 278
    :pswitch_0
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 280
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_0

    .line 281
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 286
    :cond_0
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onWaitingDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 287
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 257
    :pswitch_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 259
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_1

    .line 260
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    goto :goto_0

    :cond_1
    move-object p1, v0

    .line 266
    :goto_0
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    if-eqz p4, :cond_2

    .line 267
    sget-object p4, Lcom/ss/android/socialbase/downloader/exception/BaseException;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p4, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 272
    :cond_2
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onRetryDelay(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    .line 273
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 236
    :pswitch_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 238
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_3

    .line 239
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    goto :goto_1

    :cond_3
    move-object p1, v0

    .line 245
    :goto_1
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    if-eqz p4, :cond_4

    .line 246
    sget-object p4, Lcom/ss/android/socialbase/downloader/exception/BaseException;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p4, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 251
    :cond_4
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    .line 252
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 222
    :pswitch_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 224
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_5

    .line 225
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 230
    :cond_5
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onFirstSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 231
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 208
    :pswitch_4
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 210
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_6

    .line 211
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 216
    :cond_6
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onFirstStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 217
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 194
    :pswitch_5
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 196
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_7

    .line 197
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 202
    :cond_7
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onCanceled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 203
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 173
    :pswitch_6
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 175
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_8

    .line 176
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    goto :goto_2

    :cond_8
    move-object p1, v0

    .line 182
    :goto_2
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    if-eqz p4, :cond_9

    .line 183
    sget-object p4, Lcom/ss/android/socialbase/downloader/exception/BaseException;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p4, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    .line 188
    :cond_9
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    .line 189
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 159
    :pswitch_7
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 161
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_a

    .line 162
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 167
    :cond_a
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onSuccessed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 168
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 145
    :pswitch_8
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 147
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_b

    .line 148
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 153
    :cond_b
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onPause(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 154
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 131
    :pswitch_9
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 133
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_c

    .line 134
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 139
    :cond_c
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onProgress(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 140
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 117
    :pswitch_a
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 119
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_d

    .line 120
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 125
    :cond_d
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 126
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 103
    :pswitch_b
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 105
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_e

    .line 106
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 111
    :cond_e
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->onPrepare(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 112
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 95
    :pswitch_c
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 96
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->getOriginHashCode()I

    move-result p1

    .line 97
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 98
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 90
    :cond_f
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    nop

    :pswitch_data_0
    .packed-switch 0x1
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
