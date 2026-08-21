.class public final Lcom/vivo/push/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/vivo/push/IPushClientFactory;


# instance fields
.field private a:Lcom/vivo/push/d/ag;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/vivo/push/d/ag;

    invoke-direct {v0}, Lcom/vivo/push/d/ag;-><init>()V

    iput-object v0, p0, Lcom/vivo/push/d;->a:Lcom/vivo/push/d/ag;

    return-void
.end method


# virtual methods
.method public final createReceiveTask(Lcom/vivo/push/o;)Lcom/vivo/push/d/z;
    .locals 0

    invoke-static {p1}, Lcom/vivo/push/d/ag;->b(Lcom/vivo/push/o;)Lcom/vivo/push/d/z;

    move-result-object p1

    return-object p1
.end method

.method public final createReceiverCommand(Landroid/content/Intent;)Lcom/vivo/push/o;
    .locals 2

    const/4 v0, -0x1

    const-string v1, "command"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    if-gez v1, :cond_0

    const-string v1, "method"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    :cond_0
    const/16 v0, 0x14

    if-eq v1, v0, :cond_2

    const/16 v0, 0x7e0

    if-eq v1, v0, :cond_1

    packed-switch v1, :pswitch_data_0

    const/4 v0, 0x0

    goto :goto_0

    :pswitch_0
    new-instance v0, Lcom/vivo/push/b/j;

    invoke-direct {v0}, Lcom/vivo/push/b/j;-><init>()V

    goto :goto_0

    :pswitch_1
    new-instance v0, Lcom/vivo/push/b/i;

    invoke-direct {v0, v1}, Lcom/vivo/push/b/i;-><init>(I)V

    goto :goto_0

    :pswitch_2
    new-instance v0, Lcom/vivo/push/b/k;

    invoke-direct {v0}, Lcom/vivo/push/b/k;-><init>()V

    goto :goto_0

    :pswitch_3
    new-instance v0, Lcom/vivo/push/b/m;

    invoke-direct {v0}, Lcom/vivo/push/b/m;-><init>()V

    goto :goto_0

    :pswitch_4
    new-instance v0, Lcom/vivo/push/b/n;

    invoke-direct {v0}, Lcom/vivo/push/b/n;-><init>()V

    goto :goto_0

    :pswitch_5
    new-instance v0, Lcom/vivo/push/b/r;

    invoke-direct {v0}, Lcom/vivo/push/b/r;-><init>()V

    goto :goto_0

    :pswitch_6
    new-instance v0, Lcom/vivo/push/b/p;

    invoke-direct {v0}, Lcom/vivo/push/b/p;-><init>()V

    goto :goto_0

    :pswitch_7
    new-instance v0, Lcom/vivo/push/b/q;

    invoke-direct {v0}, Lcom/vivo/push/b/q;-><init>()V

    goto :goto_0

    :pswitch_8
    new-instance v0, Lcom/vivo/push/b/o;

    invoke-direct {v0}, Lcom/vivo/push/b/o;-><init>()V

    goto :goto_0

    :pswitch_9
    new-instance v0, Lcom/vivo/push/b/t;

    invoke-direct {v0, v1}, Lcom/vivo/push/b/t;-><init>(I)V

    goto :goto_0

    :cond_1
    new-instance v0, Lcom/vivo/push/b/l;

    invoke-direct {v0}, Lcom/vivo/push/b/l;-><init>()V

    goto :goto_0

    :cond_2
    new-instance v0, Lcom/vivo/push/b/u;

    invoke-direct {v0}, Lcom/vivo/push/b/u;-><init>()V

    :goto_0
    if-eqz v0, :cond_4

    invoke-static {p1}, Lcom/vivo/push/a;->a(Landroid/content/Intent;)Lcom/vivo/push/a;

    move-result-object p1

    if-nez p1, :cond_3

    const-string p1, "PushCommand"

    const-string v1, "bundleWapper is null"

    invoke-static {p1, v1}, Lcom/vivo/push/util/p;->b(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    :cond_3
    invoke-virtual {v0, p1}, Lcom/vivo/push/o;->b(Lcom/vivo/push/a;)V

    :cond_4
    :goto_1
    return-object v0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_9
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public final createTask(Lcom/vivo/push/o;)Lcom/vivo/push/l;
    .locals 0

    invoke-static {p1}, Lcom/vivo/push/d/ag;->a(Lcom/vivo/push/o;)Lcom/vivo/push/l;

    move-result-object p1

    return-object p1
.end method
