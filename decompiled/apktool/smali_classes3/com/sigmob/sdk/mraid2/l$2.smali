.class Lcom/sigmob/sdk/mraid2/l$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/l;->a(Lcom/sigmob/sdk/mraid2/e;II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:I

.field final synthetic c:I

.field final synthetic d:Lcom/sigmob/sdk/mraid2/e;

.field final synthetic e:Lcom/sigmob/sdk/mraid2/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/l;ZIILcom/sigmob/sdk/mraid2/e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    iput-boolean p2, p0, Lcom/sigmob/sdk/mraid2/l$2;->a:Z

    iput p3, p0, Lcom/sigmob/sdk/mraid2/l$2;->b:I

    iput p4, p0, Lcom/sigmob/sdk/mraid2/l$2;->c:I

    iput-object p5, p0, Lcom/sigmob/sdk/mraid2/l$2;->d:Lcom/sigmob/sdk/mraid2/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid2/l$2;->a:Z

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/sigmob/sdk/mraid2/l$2;->b:I

    if-lez v0, :cond_0

    const/4 v0, 0x1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/l;->a(Lcom/sigmob/sdk/mraid2/l;)I

    move-result v1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    iget v2, v2, Lcom/sigmob/sdk/mraid2/l;->a:I

    add-int/2addr v1, v2

    iget v2, p0, Lcom/sigmob/sdk/mraid2/l$2;->c:I

    if-ge v1, v2, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/l;->a(Lcom/sigmob/sdk/mraid2/l;)I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    iget v3, v3, Lcom/sigmob/sdk/mraid2/l;->a:I

    add-int/2addr v2, v3

    :goto_0
    invoke-static {v1, v2}, Lcom/sigmob/sdk/mraid2/l;->a(Lcom/sigmob/sdk/mraid2/l;I)I

    goto :goto_1

    :cond_0
    const/4 v0, 0x2

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/l;->a(Lcom/sigmob/sdk/mraid2/l;)I

    move-result v1

    if-lez v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/l;->a(Lcom/sigmob/sdk/mraid2/l;)I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    iget v3, v3, Lcom/sigmob/sdk/mraid2/l;->a:I

    sub-int/2addr v2, v3

    goto :goto_0

    :cond_1
    :goto_1
    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/l;->b(Lcom/sigmob/sdk/mraid2/l;)Lcom/sigmob/sdk/mraid2/b$c;

    move-result-object v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/l;->b(Lcom/sigmob/sdk/mraid2/l;)Lcom/sigmob/sdk/mraid2/b$c;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/l$2;->d:Lcom/sigmob/sdk/mraid2/e;

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    invoke-static {v3}, Lcom/sigmob/sdk/mraid2/l;->a(Lcom/sigmob/sdk/mraid2/l;)I

    move-result v3

    iget-object v4, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    iget v4, v4, Lcom/sigmob/sdk/mraid2/l;->a:I

    div-int/2addr v3, v4

    invoke-interface {v1, v2, v0, v3}, Lcom/sigmob/sdk/mraid2/b$c;->a(Lcom/sigmob/sdk/mraid2/e;II)V

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/l$2;->e:Lcom/sigmob/sdk/mraid2/l;

    const/4 v1, 0x0

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/l;->a(Lcom/sigmob/sdk/mraid2/l;)I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/mraid2/l;->smoothScrollTo(II)V

    return-void
.end method
