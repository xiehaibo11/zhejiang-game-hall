.class final Lcom/tkay/core/common/l/h$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnSystemUiVisibilityChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/l/h;->b(Landroid/view/View;)Landroid/view/View$OnSystemUiVisibilityChangeListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/View;


# direct methods
.method constructor <init>(Landroid/view/View;)V
    .locals 0

    .line 209
    iput-object p1, p0, Lcom/tkay/core/common/l/h$1;->a:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onSystemUiVisibilityChange(I)V
    .locals 0

    and-int/lit8 p1, p1, 0x2

    if-nez p1, :cond_0

    .line 213
    iget-object p1, p0, Lcom/tkay/core/common/l/h$1;->a:Landroid/view/View;

    invoke-static {p1}, Lcom/tkay/core/common/l/h;->a(Landroid/view/View;)V

    :cond_0
    return-void
.end method
