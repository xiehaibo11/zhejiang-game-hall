.class final Lcom/tramini/plugin/a/a/c$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/a/a/c;->b(Lcom/tramini/plugin/b/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tramini/plugin/b/a;

.field final synthetic b:Lcom/tramini/plugin/a/a/c;


# direct methods
.method constructor <init>(Lcom/tramini/plugin/a/a/c;Lcom/tramini/plugin/b/a;)V
    .locals 0

    .line 233
    iput-object p1, p0, Lcom/tramini/plugin/a/a/c$4;->b:Lcom/tramini/plugin/a/a/c;

    iput-object p2, p0, Lcom/tramini/plugin/a/a/c$4;->a:Lcom/tramini/plugin/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 237
    :try_start_0
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$4;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v0}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/a/a/c;)Landroid/content/Context;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 242
    :try_start_1
    iget-object v1, p0, Lcom/tramini/plugin/a/a/c$4;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v1}, Lcom/tramini/plugin/a/a/c;->b(Lcom/tramini/plugin/a/a/c;)Landroid/content/BroadcastReceiver;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 243
    iget-object v1, p0, Lcom/tramini/plugin/a/a/c$4;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v1}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/a/a/c;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tramini/plugin/a/a/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/a/a/b;

    move-result-object v1

    iget-object v2, p0, Lcom/tramini/plugin/a/a/c$4;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v2}, Lcom/tramini/plugin/a/a/c;->b(Lcom/tramini/plugin/a/a/c;)Landroid/content/BroadcastReceiver;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tramini/plugin/a/a/b;->a(Landroid/content/BroadcastReceiver;)V

    .line 244
    iget-object v1, p0, Lcom/tramini/plugin/a/a/c$4;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v1, v0}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/a/a/c;Landroid/content/BroadcastReceiver;)Landroid/content/BroadcastReceiver;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 249
    :catchall_0
    :cond_1
    :try_start_2
    iget-object v1, p0, Lcom/tramini/plugin/a/a/c$4;->b:Lcom/tramini/plugin/a/a/c;

    new-instance v2, Lcom/tramini/plugin/a/b;

    invoke-direct {v2}, Lcom/tramini/plugin/a/b;-><init>()V

    invoke-static {v1, v2}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/a/a/c;Landroid/content/BroadcastReceiver;)Landroid/content/BroadcastReceiver;

    .line 251
    new-instance v1, Landroid/content/IntentFilter;

    invoke-direct {v1}, Landroid/content/IntentFilter;-><init>()V

    .line 254
    iget-object v2, p0, Lcom/tramini/plugin/a/a/c$4;->a:Lcom/tramini/plugin/b/a;

    if-eqz v2, :cond_2

    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$4;->a:Lcom/tramini/plugin/b/a;

    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->d()Ljava/util/List;

    move-result-object v0

    :cond_2
    if-eqz v0, :cond_3

    .line 256
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_3

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_3

    .line 260
    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v1, v4}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 265
    :cond_3
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$4;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v0}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/a/a/c;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tramini/plugin/a/a/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/a/a/b;

    move-result-object v0

    iget-object v2, p0, Lcom/tramini/plugin/a/a/c$4;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v2}, Lcom/tramini/plugin/a/a/c;->b(Lcom/tramini/plugin/a/a/c;)Landroid/content/BroadcastReceiver;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Lcom/tramini/plugin/a/a/b;->a(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    return-void
.end method
