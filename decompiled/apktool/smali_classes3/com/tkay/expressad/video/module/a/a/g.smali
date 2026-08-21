.class public final Lcom/tkay/expressad/video/module/a/a/g;
.super Lcom/tkay/expressad/video/module/a/a/i;


# instance fields
.field private a:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayClickMiniCardView;Lcom/tkay/expressad/video/module/a/a;)V
    .locals 0

    .line 10
    invoke-direct {p0, p2}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    .line 11
    iput-object p1, p0, Lcom/tkay/expressad/video/module/a/a/g;->a:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 3

    const/4 v0, 0x0

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const/16 p1, 0x6b

    goto :goto_0

    :pswitch_1
    const/4 v0, 0x1

    goto :goto_0

    .line 26
    :pswitch_2
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/g;->a:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v1, :cond_0

    .line 27
    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->webviewshow()V

    .line 28
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/g;->a:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    :cond_0
    :goto_0
    if-nez v0, :cond_1

    .line 33
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/i;->a(ILjava/lang/Object;)V

    :cond_1
    return-void

    :pswitch_data_0
    .packed-switch 0x64
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
