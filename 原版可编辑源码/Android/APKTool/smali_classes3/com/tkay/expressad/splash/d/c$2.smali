.class final Lcom/tkay/expressad/splash/d/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/d/c;->l()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/tkay/expressad/splash/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/d/c;)V
    .locals 0

    .line 492
    iput-object p1, p0, Lcom/tkay/expressad/splash/d/c$2;->b:Lcom/tkay/expressad/splash/d/c;

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/tkay/expressad/splash/d/c$2;->a:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 0

    .line 495
    iget-boolean p1, p0, Lcom/tkay/expressad/splash/d/c$2;->a:Z

    if-nez p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
