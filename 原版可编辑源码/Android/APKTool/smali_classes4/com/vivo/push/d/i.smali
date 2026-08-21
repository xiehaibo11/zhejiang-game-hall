.class final Lcom/vivo/push/d/i;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:I

.field final synthetic b:Ljava/util/List;

.field final synthetic c:Ljava/util/List;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Lcom/vivo/push/d/h;


# direct methods
.method constructor <init>(Lcom/vivo/push/d/h;ILjava/util/List;Ljava/util/List;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/d/i;->e:Lcom/vivo/push/d/h;

    iput p2, p0, Lcom/vivo/push/d/i;->a:I

    iput-object p3, p0, Lcom/vivo/push/d/i;->b:Ljava/util/List;

    iput-object p4, p0, Lcom/vivo/push/d/i;->c:Ljava/util/List;

    iput-object p5, p0, Lcom/vivo/push/d/i;->d:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    iget-object v0, p0, Lcom/vivo/push/d/i;->e:Lcom/vivo/push/d/h;

    iget-object v1, v0, Lcom/vivo/push/d/h;->b:Lcom/vivo/push/sdk/PushMessageCallback;

    iget-object v0, p0, Lcom/vivo/push/d/i;->e:Lcom/vivo/push/d/h;

    invoke-static {v0}, Lcom/vivo/push/d/h;->a(Lcom/vivo/push/d/h;)Landroid/content/Context;

    move-result-object v2

    iget v3, p0, Lcom/vivo/push/d/i;->a:I

    iget-object v4, p0, Lcom/vivo/push/d/i;->b:Ljava/util/List;

    iget-object v5, p0, Lcom/vivo/push/d/i;->c:Ljava/util/List;

    iget-object v6, p0, Lcom/vivo/push/d/i;->d:Ljava/lang/String;

    invoke-interface/range {v1 .. v6}, Lcom/vivo/push/sdk/PushMessageCallback;->onDelTags(Landroid/content/Context;ILjava/util/List;Ljava/util/List;Ljava/lang/String;)V

    return-void
.end method
