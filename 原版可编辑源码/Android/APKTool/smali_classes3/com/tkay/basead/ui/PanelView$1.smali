.class final Lcom/tkay/basead/ui/PanelView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/PanelView;->a(Lcom/tkay/core/common/f/h;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/basead/ui/PanelView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/PanelView;Ljava/lang/String;)V
    .locals 0

    .line 255
    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView$1;->b:Lcom/tkay/basead/ui/PanelView;

    iput-object p2, p0, Lcom/tkay/basead/ui/PanelView$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 258
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView$1;->a:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 259
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$1;->b:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->a(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
