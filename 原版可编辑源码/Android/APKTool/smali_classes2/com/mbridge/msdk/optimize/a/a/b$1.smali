.class final Lcom/mbridge/msdk/optimize/a/a/b$1;
.super Ljava/lang/Object;
.source "LenovoDeviceHelper.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/optimize/a/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/optimize/a/a/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/optimize/a/a/b;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/b$1;->a:Lcom/mbridge/msdk/optimize/a/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    .line 48
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/b$1;->a:Lcom/mbridge/msdk/optimize/a/a/b;

    new-instance v0, Lcom/mbridge/msdk/optimize/a/b/b$a$a;

    invoke-direct {v0, p2}, Lcom/mbridge/msdk/optimize/a/b/b$a$a;-><init>(Landroid/os/IBinder;)V

    iput-object v0, p1, Lcom/mbridge/msdk/optimize/a/a/b;->a:Lcom/mbridge/msdk/optimize/a/b/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 50
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
