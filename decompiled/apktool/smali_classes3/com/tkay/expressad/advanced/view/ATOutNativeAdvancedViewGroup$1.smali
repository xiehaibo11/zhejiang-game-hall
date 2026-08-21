.class final Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;I)V
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup$1;->b:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    iput p2, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup$1;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup$1;->b:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a(Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;)Lcom/tkay/expressad/advanced/d/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 75
    iget-object v0, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup$1;->b:Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->a(Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;)Lcom/tkay/expressad/advanced/d/c;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup$1;->a:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/d/c;->d(I)V

    :cond_0
    return-void
.end method
