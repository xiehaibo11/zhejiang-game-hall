.class final Lcom/tkay/expressad/advanced/c/a$6$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/a$6;->a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/c/a$6;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/a$6;)V
    .locals 0

    .line 679
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$6$1;->a:Lcom/tkay/expressad/advanced/c/a$6;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 682
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$6$1;->a:Lcom/tkay/expressad/advanced/c/a$6;

    iget-object v0, v0, Lcom/tkay/expressad/advanced/c/a$6;->c:Lcom/tkay/expressad/advanced/c/a;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a$6$1;->a:Lcom/tkay/expressad/advanced/c/a$6;

    iget-object v1, v1, Lcom/tkay/expressad/advanced/c/a$6;->a:Lcom/tkay/expressad/foundation/d/c;

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a$6$1;->a:Lcom/tkay/expressad/advanced/c/a$6;

    iget v2, v2, Lcom/tkay/expressad/advanced/c/a$6;->b:I

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V

    return-void
.end method
