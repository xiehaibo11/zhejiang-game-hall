.class final Lcom/tkay/expressad/advanced/c/b$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

.field final synthetic c:Lcom/tkay/expressad/advanced/c/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/b;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)V
    .locals 0

    .line 337
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/b$5;->c:Lcom/tkay/expressad/advanced/c/b;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/b$5;->a:Lcom/tkay/expressad/foundation/d/c;

    iput-object p3, p0, Lcom/tkay/expressad/advanced/c/b$5;->b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 340
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b$5;->c:Lcom/tkay/expressad/advanced/c/b;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b$5;->a:Lcom/tkay/expressad/foundation/d/c;

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/b$5;->b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Z)V

    return-void
.end method
