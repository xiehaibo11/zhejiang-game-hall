.class Lcom/czhj/devicehelper/oaId/helpers/k$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/devicehelper/oaId/helpers/k;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/devicehelper/oaId/helpers/k;


# direct methods
.method constructor <init>(Lcom/czhj/devicehelper/oaId/helpers/k;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/k$1;->a:Lcom/czhj/devicehelper/oaId/helpers/k;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    :try_start_0
    iget-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/k$1;->a:Lcom/czhj/devicehelper/oaId/helpers/k;

    iget-object p1, p1, Lcom/czhj/devicehelper/oaId/helpers/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/LinkedBlockingQueue;->put(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
