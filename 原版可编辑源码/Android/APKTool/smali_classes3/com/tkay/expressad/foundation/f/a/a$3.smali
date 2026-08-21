.class final Lcom/tkay/expressad/foundation/f/a/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/f/a/a;->a(Landroid/widget/RadioButton;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/f/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/f/a/a;)V
    .locals 0

    .line 216
    iput-object p1, p0, Lcom/tkay/expressad/foundation/f/a/a$3;->a:Lcom/tkay/expressad/foundation/f/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 0

    if-eqz p2, :cond_0

    .line 220
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getText()Ljava/lang/CharSequence;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/f/a/a;->a(Ljava/lang/String;)Ljava/lang/String;

    .line 222
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/foundation/f/a/a$3;->a:Lcom/tkay/expressad/foundation/f/a/a;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/f/a/a;->d(Lcom/tkay/expressad/foundation/f/a/a;)Lcom/tkay/expressad/widget/a/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 223
    iget-object p1, p0, Lcom/tkay/expressad/foundation/f/a/a$3;->a:Lcom/tkay/expressad/foundation/f/a/a;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/f/a/a;->d(Lcom/tkay/expressad/foundation/f/a/a;)Lcom/tkay/expressad/widget/a/a;

    move-result-object p1

    invoke-static {}, Lcom/tkay/expressad/foundation/f/a/a;->f()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    xor-int/lit8 p2, p2, 0x1

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/widget/a/a;->a(Z)V

    :cond_1
    return-void
.end method
