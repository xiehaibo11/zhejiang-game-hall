.class final Lcom/mbridge/msdk/optimize/a/a/a$1;
.super Ljava/lang/Object;
.source "ASUSDeviceHelper.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/optimize/a/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/optimize/a/a/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/optimize/a/a/a;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/a$1;->a:Lcom/mbridge/msdk/optimize/a/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 64
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/a$1;->a:Lcom/mbridge/msdk/optimize/a/a/a;

    iget-object p1, p1, Lcom/mbridge/msdk/optimize/a/a/a;->a:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/LinkedBlockingQueue;->put(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 66
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
