.class public final Lcom/loc/e$a;
.super Landroid/os/Handler;
.source "ApsManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/e;


# direct methods
.method public constructor <init>(Lcom/loc/e;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 8

    const/4 v0, 0x1

    const/4 v1, 0x0

    :try_start_0
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    iget-object v3, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v2, :cond_1

    :try_start_2
    invoke-virtual {v2}, Landroid/os/Bundle;->isEmpty()Z

    move-result v4

    if-nez v4, :cond_1

    const-string v4, "c"

    invoke-virtual {v2, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-virtual {v5, v4}, Lcom/loc/e;->a(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_1

    iget v4, p1, Landroid/os/Message;->what:I

    if-ne v4, v0, :cond_0

    const/16 v4, 0x836

    invoke-static {v1, v4}, Lcom/loc/fx;->a(Ljava/lang/String;I)V

    const-string v1, "invalid handlder scode!!!#1002"

    invoke-static {v1}, Lcom/loc/e;->b(Ljava/lang/String;)Lcom/loc/ew;

    move-result-object v1

    new-instance v4, Lcom/loc/eq;

    invoke-direct {v4}, Lcom/loc/eq;-><init>()V

    const-string v5, "#1002"

    invoke-virtual {v4, v5}, Lcom/loc/eq;->f(Ljava/lang/String;)V

    const-string v5, "conitue"

    invoke-virtual {v4, v5}, Lcom/loc/eq;->e(Ljava/lang/String;)V

    iget-object v5, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-virtual {v1}, Lcom/loc/ew;->k()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v3, v1, v6, v4}, Lcom/loc/e;->a(Lcom/loc/e;Landroid/os/Messenger;Lcom/amap/api/location/AMapLocation;Ljava/lang/String;Lcom/loc/eq;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v1

    goto :goto_0

    :catchall_1
    move-exception v3

    move-object v7, v3

    move-object v3, v1

    move-object v1, v7

    goto :goto_0

    :catchall_2
    move-exception v2

    move-object v3, v1

    move-object v1, v2

    move-object v2, v3

    :goto_0
    :try_start_3
    const-string v4, "ApsServiceCore"

    const-string v5, "ActionHandler handlerMessage"

    invoke-static {v1, v4, v5}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget v1, p1, Landroid/os/Message;->what:I

    if-eqz v1, :cond_4

    if-eq v1, v0, :cond_3

    packed-switch v1, :pswitch_data_0

    goto/16 :goto_2

    :pswitch_0
    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0, v2}, Lcom/loc/e;->a(Lcom/loc/e;Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    const-string v1, "COARSE_LOC"

    :goto_1
    invoke-virtual {v0, v3, v2, v1}, Lcom/loc/e;->a(Landroid/os/Messenger;Landroid/os/Bundle;Ljava/lang/String;)V

    goto/16 :goto_2

    :pswitch_1
    iget-object v0, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    if-eqz v0, :cond_2

    iget-object v1, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v1}, Lcom/loc/e;->b(Lcom/loc/e;)Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v1}, Lcom/loc/e;->b(Lcom/loc/e;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v1}, Lcom/loc/e;->b(Lcom/loc/e;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_2
    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0}, Lcom/loc/e;->b(Lcom/loc/e;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0}, Lcom/loc/e;->b(Lcom/loc/e;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    iget-object v0, v0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {v0}, Lcom/loc/er;->h()V

    goto :goto_2

    :pswitch_2
    iget-object v1, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    if-eqz v1, :cond_5

    iget-object v2, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v2}, Lcom/loc/e;->b(Lcom/loc/e;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_5

    iget-object v2, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v2}, Lcom/loc/e;->b(Lcom/loc/e;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_5

    iget-object v2, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v2}, Lcom/loc/e;->b(Lcom/loc/e;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v1, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v1}, Lcom/loc/e;->b(Lcom/loc/e;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ne v1, v0, :cond_5

    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0}, Lcom/loc/e;->c(Lcom/loc/e;)V

    goto :goto_2

    :pswitch_3
    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0, v3}, Lcom/loc/e;->a(Lcom/loc/e;Landroid/os/Messenger;)V

    goto :goto_2

    :pswitch_4
    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-virtual {v0}, Lcom/loc/e;->c()V

    goto :goto_2

    :pswitch_5
    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0, v2}, Lcom/loc/e;->a(Lcom/loc/e;Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    const-string v1, "FINE_LOC"

    goto/16 :goto_1

    :pswitch_6
    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0, v2}, Lcom/loc/e;->a(Lcom/loc/e;Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0}, Lcom/loc/e;->a(Lcom/loc/e;)V

    goto :goto_2

    :cond_3
    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0, v2}, Lcom/loc/e;->a(Lcom/loc/e;Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0, v3, v2}, Lcom/loc/e;->b(Lcom/loc/e;Landroid/os/Messenger;Landroid/os/Bundle;)V

    goto :goto_2

    :cond_4
    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0, v2}, Lcom/loc/e;->a(Lcom/loc/e;Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/loc/e$a;->a:Lcom/loc/e;

    invoke-static {v0, v3, v2}, Lcom/loc/e;->a(Lcom/loc/e;Landroid/os/Messenger;Landroid/os/Bundle;)V

    :cond_5
    :goto_2
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    return-void

    :catchall_3
    move-exception p1

    const-string v0, "actionHandler"

    const-string v1, "handleMessage"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x9
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
