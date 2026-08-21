.class final Lcom/tkay/core/common/res/b$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/image/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/res/b;->b(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/core/common/res/e;

.field final synthetic d:Lcom/tkay/core/common/res/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/res/b;IILcom/tkay/core/common/res/e;)V
    .locals 0

    .line 298
    iput-object p1, p0, Lcom/tkay/core/common/res/b$5;->d:Lcom/tkay/core/common/res/b;

    iput p2, p0, Lcom/tkay/core/common/res/b$5;->a:I

    iput p3, p0, Lcom/tkay/core/common/res/b$5;->b:I

    iput-object p4, p0, Lcom/tkay/core/common/res/b$5;->c:Lcom/tkay/core/common/res/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/res/e;)V
    .locals 3

    .line 301
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Load Success:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p1, Lcom/tkay/core/common/res/e;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 303
    iget-object v0, p0, Lcom/tkay/core/common/res/b$5;->d:Lcom/tkay/core/common/res/b;

    iget v1, p0, Lcom/tkay/core/common/res/b$5;->a:I

    iget v2, p0, Lcom/tkay/core/common/res/b$5;->b:I

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;II)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 305
    iget-object v1, p0, Lcom/tkay/core/common/res/b$5;->d:Lcom/tkay/core/common/res/b;

    iget-object p1, p1, Lcom/tkay/core/common/res/e;->f:Ljava/lang/String;

    invoke-virtual {v1, p1, v0}, Lcom/tkay/core/common/res/b;->a(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 308
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/res/b$5;->d:Lcom/tkay/core/common/res/b;

    iget-object v1, p0, Lcom/tkay/core/common/res/b$5;->c:Lcom/tkay/core/common/res/e;

    iget-object v1, v1, Lcom/tkay/core/common/res/e;->f:Ljava/lang/String;

    invoke-static {p1, v1, v0}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/b;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public final a(Lcom/tkay/core/common/res/e;Ljava/lang/String;)V
    .locals 1

    .line 313
    iget-object v0, p0, Lcom/tkay/core/common/res/b$5;->d:Lcom/tkay/core/common/res/b;

    iget-object p1, p1, Lcom/tkay/core/common/res/e;->f:Ljava/lang/String;

    invoke-static {v0, p1, p2}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/b;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
