.class final Lcom/tkay/expressad/advanced/c/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/c;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/advanced/c/c$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

.field final synthetic b:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;Ljava/lang/String;)V
    .locals 0

    .line 326
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/c$2;->a:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/c$2;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 329
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/c$2;->a:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/c$2;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->loadUrl(Ljava/lang/String;)V

    return-void
.end method
