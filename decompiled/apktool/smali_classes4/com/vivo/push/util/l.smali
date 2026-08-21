.class final Lcom/vivo/push/util/l;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Ljava/util/List;

.field final synthetic b:Lcom/vivo/push/util/k;


# direct methods
.method constructor <init>(Lcom/vivo/push/util/k;Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/util/l;->b:Lcom/vivo/push/util/k;

    iput-object p2, p0, Lcom/vivo/push/util/l;->a:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    iget-object v0, p0, Lcom/vivo/push/util/l;->b:Lcom/vivo/push/util/k;

    invoke-static {v0}, Lcom/vivo/push/util/k;->a(Lcom/vivo/push/util/k;)Lcom/vivo/push/model/InsideNotificationItem;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/vivo/push/util/w;->b()Lcom/vivo/push/util/w;

    move-result-object v0

    iget-object v1, p0, Lcom/vivo/push/util/l;->b:Lcom/vivo/push/util/k;

    invoke-static {v1}, Lcom/vivo/push/util/k;->b(Lcom/vivo/push/util/k;)J

    move-result-wide v1

    const-string v3, "com.vivo.push.notify_key"

    invoke-virtual {v0, v3, v1, v2}, Lcom/vivo/push/util/w;->a(Ljava/lang/String;J)V

    iget-object v0, p0, Lcom/vivo/push/util/l;->b:Lcom/vivo/push/util/k;

    invoke-static {v0}, Lcom/vivo/push/util/k;->c(Lcom/vivo/push/util/k;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/vivo/push/util/l;->a:Ljava/util/List;

    iget-object v0, p0, Lcom/vivo/push/util/l;->b:Lcom/vivo/push/util/k;

    invoke-static {v0}, Lcom/vivo/push/util/k;->a(Lcom/vivo/push/util/k;)Lcom/vivo/push/model/InsideNotificationItem;

    move-result-object v3

    iget-object v0, p0, Lcom/vivo/push/util/l;->b:Lcom/vivo/push/util/k;

    invoke-static {v0}, Lcom/vivo/push/util/k;->b(Lcom/vivo/push/util/k;)J

    move-result-wide v4

    iget-object v0, p0, Lcom/vivo/push/util/l;->b:Lcom/vivo/push/util/k;

    invoke-static {v0}, Lcom/vivo/push/util/k;->d(Lcom/vivo/push/util/k;)I

    move-result v6

    iget-object v0, p0, Lcom/vivo/push/util/l;->b:Lcom/vivo/push/util/k;

    invoke-static {v0}, Lcom/vivo/push/util/k;->e(Lcom/vivo/push/util/k;)Lcom/vivo/push/d/r$a;

    move-result-object v7

    invoke-static/range {v1 .. v7}, Lcom/vivo/push/util/NotifyAdapterUtil;->pushNotification(Landroid/content/Context;Ljava/util/List;Lcom/vivo/push/model/InsideNotificationItem;JILcom/vivo/push/d/r$a;)V

    :cond_0
    return-void
.end method
