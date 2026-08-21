.class public Lcom/tkay/basead/ui/FeedbackTextView;
.super Lcom/tkay/basead/ui/AutoResizeTextView;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 19
    invoke-direct {p0, p1, p2}, Lcom/tkay/basead/ui/AutoResizeTextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p2, "myoffer_bg_feedback_textview"

    const-string v0, "drawable"

    .line 1024
    invoke-static {p1, p2, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/FeedbackTextView;->setBackgroundResource(I)V

    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 2

    const-string v0, "myoffer_bg_feedback_textview"

    const-string v1, "drawable"

    .line 24
    invoke-static {p1, v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/FeedbackTextView;->setBackgroundResource(I)V

    return-void
.end method
