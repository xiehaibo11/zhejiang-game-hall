.class final Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1;
.super Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;
.source "ExChangeVideoBroadcast.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1;->a:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onVideo(Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/ParcelFileDescriptor;)V
    .locals 11
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 124
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v10, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;

    move-object v1, v10

    move-object v2, p0

    move-object/from16 v3, p7

    move-object/from16 v4, p6

    move-object v5, p4

    move-object v6, p1

    move-object/from16 v7, p5

    move-wide v8, p2

    invoke-direct/range {v1 .. v9}, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1$1;-><init>(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1;Landroid/os/ParcelFileDescriptor;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {v0, v10}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
