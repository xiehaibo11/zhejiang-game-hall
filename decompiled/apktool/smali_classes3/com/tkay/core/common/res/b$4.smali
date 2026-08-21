.class final Lcom/tkay/core/common/res/b$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/res/e;

.field final synthetic b:I

.field final synthetic c:I

.field final synthetic d:Lcom/tkay/core/common/res/b$a;

.field final synthetic e:Lcom/tkay/core/common/res/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/res/b;Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V
    .locals 0

    .line 266
    iput-object p1, p0, Lcom/tkay/core/common/res/b$4;->e:Lcom/tkay/core/common/res/b;

    iput-object p2, p0, Lcom/tkay/core/common/res/b$4;->a:Lcom/tkay/core/common/res/e;

    iput p3, p0, Lcom/tkay/core/common/res/b$4;->b:I

    iput p4, p0, Lcom/tkay/core/common/res/b$4;->c:I

    iput-object p5, p0, Lcom/tkay/core/common/res/b$4;->d:Lcom/tkay/core/common/res/b$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 269
    iget-object v0, p0, Lcom/tkay/core/common/res/b$4;->e:Lcom/tkay/core/common/res/b;

    iget-object v1, p0, Lcom/tkay/core/common/res/b$4;->a:Lcom/tkay/core/common/res/e;

    iget v2, p0, Lcom/tkay/core/common/res/b$4;->b:I

    iget v3, p0, Lcom/tkay/core/common/res/b$4;->c:I

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;II)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 270
    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v1

    if-nez v1, :cond_0

    .line 271
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "url image ["

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/core/common/res/b$4;->a:Lcom/tkay/core/common/res/e;

    iget-object v2, v2, Lcom/tkay/core/common/res/e;->f:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "] is downloaded"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 272
    iget-object v1, p0, Lcom/tkay/core/common/res/b$4;->e:Lcom/tkay/core/common/res/b;

    iget-object v2, p0, Lcom/tkay/core/common/res/b$4;->a:Lcom/tkay/core/common/res/e;

    iget-object v2, v2, Lcom/tkay/core/common/res/e;->f:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/res/b;->a(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 273
    new-instance v1, Ljava/util/LinkedList;

    invoke-direct {v1}, Ljava/util/LinkedList;-><init>()V

    .line 274
    iget-object v2, p0, Lcom/tkay/core/common/res/b$4;->d:Lcom/tkay/core/common/res/b$a;

    invoke-virtual {v1, v2}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    .line 275
    iget-object v2, p0, Lcom/tkay/core/common/res/b$4;->e:Lcom/tkay/core/common/res/b;

    invoke-static {v2}, Lcom/tkay/core/common/res/b;->b(Lcom/tkay/core/common/res/b;)Ljava/util/LinkedHashMap;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/res/b$4;->a:Lcom/tkay/core/common/res/e;

    iget-object v3, v3, Lcom/tkay/core/common/res/e;->f:Ljava/lang/String;

    invoke-virtual {v2, v3, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 277
    iget-object v1, p0, Lcom/tkay/core/common/res/b$4;->e:Lcom/tkay/core/common/res/b;

    iget-object v2, p0, Lcom/tkay/core/common/res/b$4;->a:Lcom/tkay/core/common/res/e;

    iget-object v2, v2, Lcom/tkay/core/common/res/e;->f:Ljava/lang/String;

    invoke-static {v1, v2, v0}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/b;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    return-void

    .line 279
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/res/b$4;->e:Lcom/tkay/core/common/res/b;

    iget-object v1, p0, Lcom/tkay/core/common/res/b$4;->a:Lcom/tkay/core/common/res/e;

    iget v2, p0, Lcom/tkay/core/common/res/b$4;->b:I

    iget v3, p0, Lcom/tkay/core/common/res/b$4;->c:I

    iget-object v4, p0, Lcom/tkay/core/common/res/b$4;->d:Lcom/tkay/core/common/res/b$a;

    invoke-static {v0, v1, v2, v3, v4}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/b;Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    return-void
.end method
