.class final Lcom/tkay/expressad/advanced/c/a$10;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/a;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/expressad/advanced/c/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;Ljava/lang/String;)V
    .locals 0

    .line 863
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$10;->c:Lcom/tkay/expressad/advanced/c/a;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/a$10;->a:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    iput-object p3, p0, Lcom/tkay/expressad/advanced/c/a$10;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 866
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$10;->a:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a$10;->b:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->loadUrl(Ljava/lang/String;)V

    return-void
.end method
