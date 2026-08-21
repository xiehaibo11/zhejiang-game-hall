.class final Lcom/tkay/expressad/activity/TYBaseActivity$2;
.super Landroid/view/OrientationEventListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/activity/TYBaseActivity;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/activity/TYBaseActivity;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/activity/TYBaseActivity;Landroid/content/Context;)V
    .locals 0

    .line 138
    iput-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    const/4 p1, 0x1

    invoke-direct {p0, p2, p1}, Landroid/view/OrientationEventListener;-><init>(Landroid/content/Context;I)V

    return-void
.end method


# virtual methods
.method public final onOrientationChanged(I)V
    .locals 3

    .line 141
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {p1}, Lcom/tkay/expressad/activity/TYBaseActivity;->a(Lcom/tkay/expressad/activity/TYBaseActivity;)I

    move-result p1

    if-gez p1, :cond_0

    const/4 p1, 0x0

    :cond_0
    const/4 v0, 0x1

    if-ne p1, v0, :cond_1

    .line 147
    iget-object v1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {v1}, Lcom/tkay/expressad/activity/TYBaseActivity;->b(Lcom/tkay/expressad/activity/TYBaseActivity;)I

    move-result v1

    if-eq v1, v0, :cond_1

    .line 148
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {p1, v0}, Lcom/tkay/expressad/activity/TYBaseActivity;->a(Lcom/tkay/expressad/activity/TYBaseActivity;I)I

    .line 149
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-virtual {p1}, Lcom/tkay/expressad/activity/TYBaseActivity;->a()V

    return-void

    :cond_1
    const/4 v0, 0x2

    const/4 v1, 0x3

    if-ne p1, v1, :cond_2

    .line 154
    iget-object v2, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {v2}, Lcom/tkay/expressad/activity/TYBaseActivity;->b(Lcom/tkay/expressad/activity/TYBaseActivity;)I

    move-result v2

    if-eq v2, v0, :cond_2

    .line 155
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {p1, v0}, Lcom/tkay/expressad/activity/TYBaseActivity;->a(Lcom/tkay/expressad/activity/TYBaseActivity;I)I

    .line 156
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-virtual {p1}, Lcom/tkay/expressad/activity/TYBaseActivity;->a()V

    return-void

    :cond_2
    if-nez p1, :cond_3

    .line 161
    iget-object v2, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {v2}, Lcom/tkay/expressad/activity/TYBaseActivity;->b(Lcom/tkay/expressad/activity/TYBaseActivity;)I

    move-result v2

    if-eq v2, v1, :cond_3

    .line 162
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {p1, v1}, Lcom/tkay/expressad/activity/TYBaseActivity;->a(Lcom/tkay/expressad/activity/TYBaseActivity;I)I

    .line 163
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-virtual {p1}, Lcom/tkay/expressad/activity/TYBaseActivity;->a()V

    return-void

    :cond_3
    if-ne p1, v0, :cond_4

    .line 168
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {p1}, Lcom/tkay/expressad/activity/TYBaseActivity;->b(Lcom/tkay/expressad/activity/TYBaseActivity;)I

    move-result p1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_4

    .line 169
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {p1, v0}, Lcom/tkay/expressad/activity/TYBaseActivity;->a(Lcom/tkay/expressad/activity/TYBaseActivity;I)I

    .line 170
    iget-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$2;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-virtual {p1}, Lcom/tkay/expressad/activity/TYBaseActivity;->a()V

    :cond_4
    return-void
.end method
