.class final Lcom/tkay/core/common/res/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/res/b;->b(Ljava/lang/String;Landroid/graphics/Bitmap;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/graphics/Bitmap;

.field final synthetic b:Lcom/tkay/core/common/res/b$a;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/tkay/core/common/res/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/res/b;Landroid/graphics/Bitmap;Lcom/tkay/core/common/res/b$a;Ljava/lang/String;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/tkay/core/common/res/b$1;->d:Lcom/tkay/core/common/res/b;

    iput-object p2, p0, Lcom/tkay/core/common/res/b$1;->a:Landroid/graphics/Bitmap;

    iput-object p3, p0, Lcom/tkay/core/common/res/b$1;->b:Lcom/tkay/core/common/res/b$a;

    iput-object p4, p0, Lcom/tkay/core/common/res/b$1;->c:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 57
    iget-object v0, p0, Lcom/tkay/core/common/res/b$1;->a:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_0

    .line 58
    iget-object v1, p0, Lcom/tkay/core/common/res/b$1;->b:Lcom/tkay/core/common/res/b$a;

    iget-object v2, p0, Lcom/tkay/core/common/res/b$1;->c:Ljava/lang/String;

    invoke-interface {v1, v2, v0}, Lcom/tkay/core/common/res/b$a;->onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    return-void

    .line 60
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/res/b$1;->b:Lcom/tkay/core/common/res/b$a;

    iget-object v1, p0, Lcom/tkay/core/common/res/b$1;->c:Ljava/lang/String;

    const-string v2, "Bitmap load fail"

    invoke-interface {v0, v1, v2}, Lcom/tkay/core/common/res/b$a;->onFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
