.class Lcom/sigmob/sdk/mraid2/g$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/g;->b(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:I

.field final synthetic c:Lcom/sigmob/sdk/mraid2/g;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/g;II)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/g$1;->c:Lcom/sigmob/sdk/mraid2/g;

    iput p2, p0, Lcom/sigmob/sdk/mraid2/g$1;->a:I

    iput p3, p0, Lcom/sigmob/sdk/mraid2/g$1;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    iget v0, p0, Lcom/sigmob/sdk/mraid2/g$1;->a:I

    const/4 v1, 0x0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/g$1;->c:Lcom/sigmob/sdk/mraid2/g;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/g;->a(Lcom/sigmob/sdk/mraid2/g;)I

    move-result v0

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/g$1;->c:Lcom/sigmob/sdk/mraid2/g;

    iget v2, v2, Lcom/sigmob/sdk/mraid2/g;->a:I

    add-int/2addr v0, v2

    iget v2, p0, Lcom/sigmob/sdk/mraid2/g$1;->b:I

    if-ge v0, v2, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/g$1;->c:Lcom/sigmob/sdk/mraid2/g;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/g;->a(Lcom/sigmob/sdk/mraid2/g;)I

    move-result v2

    iget v3, p0, Lcom/sigmob/sdk/mraid2/g$1;->a:I

    invoke-static {v3}, Ljava/lang/Math;->abs(I)I

    move-result v3

    add-int/2addr v2, v3

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/g$1;->c:Lcom/sigmob/sdk/mraid2/g;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/g;->a(Lcom/sigmob/sdk/mraid2/g;)I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/g$1;->c:Lcom/sigmob/sdk/mraid2/g;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/g;->a(Lcom/sigmob/sdk/mraid2/g;)I

    move-result v2

    iget v3, p0, Lcom/sigmob/sdk/mraid2/g$1;->a:I

    invoke-static {v3}, Ljava/lang/Math;->abs(I)I

    move-result v3

    sub-int/2addr v2, v3

    :goto_0
    invoke-virtual {v0, v2, v1}, Lcom/sigmob/sdk/mraid2/g;->scrollTo(II)V

    :cond_1
    return-void
.end method
