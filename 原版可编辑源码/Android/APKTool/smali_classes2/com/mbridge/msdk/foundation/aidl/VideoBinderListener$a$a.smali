.class final Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a$a;
.super Ljava/lang/Object;
.source "VideoBinderListener.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field public static a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;


# instance fields
.field private b:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 92
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 93
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a$a;->b:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public final asBinder()Landroid/os/IBinder;
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a$a;->b:Landroid/os/IBinder;

    return-object v0
.end method

.method public final onVideo(Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/ParcelFileDescriptor;)V
    .locals 13
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    move-object/from16 v0, p7

    .line 105
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v9

    .line 106
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v10

    :try_start_0
    const-string v1, "com.mbridge.msdk.foundation.aidl.VideoBinderListener"

    .line 108
    invoke-virtual {v9, v1}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    move-object v2, p1

    .line 109
    invoke-virtual {v9, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    move-wide v3, p2

    .line 110
    invoke-virtual {v9, v3, v4}, Landroid/os/Parcel;->writeLong(J)V

    move-object/from16 v5, p4

    .line 111
    invoke-virtual {v9, v5}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    move-object/from16 v6, p5

    .line 112
    invoke-virtual {v9, v6}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    move-object/from16 v7, p6

    .line 113
    invoke-virtual {v9, v7}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v1, 0x1

    const/4 v8, 0x0

    if-eqz v0, :cond_0

    .line 115
    invoke-virtual {v9, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 116
    invoke-virtual {v0, v9, v8}, Landroid/os/ParcelFileDescriptor;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 119
    :cond_0
    invoke-virtual {v9, v8}, Landroid/os/Parcel;->writeInt(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :goto_0
    move-object v11, p0

    .line 121
    :try_start_1
    iget-object v12, v11, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a$a;->b:Landroid/os/IBinder;

    invoke-interface {v12, v1, v9, v10, v8}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v1

    if-nez v1, :cond_1

    .line 122
    invoke-static {}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;->a()Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 123
    invoke-static {}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;->a()Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    move-result-object v1

    move-object v2, p1

    move-wide v3, p2

    move-object/from16 v5, p4

    move-object/from16 v6, p5

    move-object/from16 v7, p6

    move-object/from16 v8, p7

    invoke-interface/range {v1 .. v8}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;->onVideo(Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/ParcelFileDescriptor;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 129
    invoke-virtual {v10}, Landroid/os/Parcel;->recycle()V

    .line 130
    invoke-virtual {v9}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 126
    :cond_1
    :try_start_2
    invoke-virtual {v10}, Landroid/os/Parcel;->readException()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 129
    invoke-virtual {v10}, Landroid/os/Parcel;->recycle()V

    .line 130
    invoke-virtual {v9}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_1

    :catchall_1
    move-exception v0

    move-object v11, p0

    .line 129
    :goto_1
    invoke-virtual {v10}, Landroid/os/Parcel;->recycle()V

    .line 130
    invoke-virtual {v9}, Landroid/os/Parcel;->recycle()V

    .line 131
    throw v0
.end method
