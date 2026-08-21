.class final Lcom/mbridge/msdk/splash/c/a$2;
.super Ljava/lang/Object;
.source "NativeViewRenderManager.java"

# interfaces
.implements Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/b/a;

.field final synthetic b:Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

.field final synthetic c:Lcom/mbridge/msdk/splash/view/MBSplashView;

.field final synthetic d:Lcom/mbridge/msdk/splash/a/c;

.field final synthetic e:Lcom/mbridge/msdk/splash/c/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/a;Lcom/mbridge/msdk/splash/b/a;Lcom/mbridge/msdk/dycreator/wrapper/DyOption;Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;)V
    .locals 0

    .line 116
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/a$2;->e:Lcom/mbridge/msdk/splash/c/a;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/a$2;->a:Lcom/mbridge/msdk/splash/b/a;

    iput-object p3, p0, Lcom/mbridge/msdk/splash/c/a$2;->b:Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    iput-object p4, p0, Lcom/mbridge/msdk/splash/c/a$2;->c:Lcom/mbridge/msdk/splash/view/MBSplashView;

    iput-object p5, p0, Lcom/mbridge/msdk/splash/c/a$2;->d:Lcom/mbridge/msdk/splash/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final viewClicked(Lcom/mbridge/msdk/dycreator/binding/response/base/BaseRespData;)V
    .locals 12

    .line 155
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->c:Lcom/mbridge/msdk/splash/view/MBSplashView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 156
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->c:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/js/b;->a()Lcom/mbridge/msdk/splash/d/a;

    move-result-object v0

    move-object v5, v0

    goto :goto_0

    :cond_0
    move-object v5, v1

    .line 159
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->b:Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    if-eqz v0, :cond_1

    .line 160
    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getCampaignEx()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    move-object v8, v0

    goto :goto_1

    :cond_1
    move-object v8, v1

    .line 163
    :goto_1
    instance-of v0, p1, Lcom/mbridge/msdk/dycreator/binding/response/SplashResData;

    if-eqz v0, :cond_2

    .line 164
    move-object v1, p1

    check-cast v1, Lcom/mbridge/msdk/dycreator/binding/response/SplashResData;

    invoke-virtual {v1}, Lcom/mbridge/msdk/dycreator/binding/response/SplashResData;->geteAction()Lcom/mbridge/msdk/dycreator/listener/action/EAction;

    move-result-object v1

    :cond_2
    if-eqz v1, :cond_5

    .line 167
    sget-object v2, Lcom/mbridge/msdk/splash/c/a$5;->a:[I

    invoke-virtual {v1}, Lcom/mbridge/msdk/dycreator/listener/action/EAction;->ordinal()I

    move-result v1

    aget v1, v2, v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    packed-switch v1, :pswitch_data_0

    goto/16 :goto_3

    :pswitch_0
    if-eqz p1, :cond_5

    if-eqz v0, :cond_5

    .line 205
    check-cast p1, Lcom/mbridge/msdk/dycreator/binding/response/SplashResData;

    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/binding/response/SplashResData;->getBaseViewData()Lcom/mbridge/msdk/dycreator/f/a/a;

    move-result-object v4

    .line 206
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/a$2;->e:Lcom/mbridge/msdk/splash/c/a;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->c:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v9

    if-eqz v5, :cond_5

    if-eqz v4, :cond_3

    .line 2219
    invoke-interface {v4}, Lcom/mbridge/msdk/dycreator/f/a/a;->getEffectData()Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 2220
    invoke-interface {v4}, Lcom/mbridge/msdk/dycreator/f/a/a;->getEffectData()Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getCurrentCountDown()I

    move-result v0

    .line 2221
    invoke-interface {v5, v2, v0}, Lcom/mbridge/msdk/splash/d/a;->a(II)V

    move v7, v0

    goto :goto_2

    :cond_3
    move v7, v3

    :goto_2
    if-eqz v9, :cond_5

    .line 2225
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v0

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v10

    new-instance v11, Lcom/mbridge/msdk/splash/c/a$3;

    move-object v2, v11

    move-object v3, p1

    move-object v6, v8

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/splash/c/a$3;-><init>(Lcom/mbridge/msdk/splash/c/a;Lcom/mbridge/msdk/dycreator/f/a/a;Lcom/mbridge/msdk/splash/d/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    const-string v7, ""

    move-object v6, v0

    invoke-virtual/range {v6 .. v11}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    goto/16 :goto_3

    :pswitch_1
    if-eqz v8, :cond_5

    .line 194
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 195
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getPriUrl()Ljava/lang/String;

    move-result-object p1

    .line 196
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 197
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V

    goto/16 :goto_3

    :pswitch_2
    if-eqz p1, :cond_5

    if-eqz v0, :cond_5

    .line 187
    check-cast p1, Lcom/mbridge/msdk/dycreator/binding/response/SplashResData;

    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/binding/response/SplashResData;->getBaseViewData()Lcom/mbridge/msdk/dycreator/f/a/a;

    move-result-object p1

    .line 188
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->e:Lcom/mbridge/msdk/splash/c/a;

    if-eqz v8, :cond_5

    .line 1247
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v1

    .line 1248
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    if-eqz p1, :cond_4

    .line 1251
    invoke-interface {p1}, Lcom/mbridge/msdk/dycreator/f/a/a;->getEffectData()Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getCurrentCountDown()I

    move-result v3

    .line 1253
    :cond_4
    invoke-interface {v5, v2, v3}, Lcom/mbridge/msdk/splash/d/a;->a(II)V

    .line 1254
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object p1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "_"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/b/a/a;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 1256
    invoke-virtual {p1, v8}, Lcom/mbridge/msdk/foundation/b/a/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1259
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v2

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v4, Lcom/mbridge/msdk/splash/c/a$4;

    invoke-direct {v4, v0, v5, v3}, Lcom/mbridge/msdk/splash/c/a$4;-><init>(Lcom/mbridge/msdk/splash/c/a;Lcom/mbridge/msdk/splash/d/a;I)V

    invoke-virtual {v2, v1, v4}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/b/a;)V

    .line 1275
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/b/a/a;->a()V

    goto :goto_3

    .line 180
    :pswitch_3
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/a$2;->b:Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    if-eqz p1, :cond_5

    .line 181
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->b:Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getAdChoiceLink()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_3

    :pswitch_4
    if-eqz v5, :cond_5

    .line 176
    invoke-interface {v5}, Lcom/mbridge/msdk/splash/d/a;->a()V

    goto :goto_3

    .line 169
    :pswitch_5
    move-object v0, p1

    check-cast v0, Lcom/mbridge/msdk/dycreator/binding/response/SplashResData;

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/binding/response/SplashResData;->getBaseViewData()Lcom/mbridge/msdk/dycreator/f/a/a;

    move-result-object v0

    if-eqz p1, :cond_5

    .line 171
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/a$2;->e:Lcom/mbridge/msdk/splash/c/a;

    invoke-static {p1, v0, v5, v8}, Lcom/mbridge/msdk/splash/c/a;->a(Lcom/mbridge/msdk/splash/c/a;Lcom/mbridge/msdk/dycreator/f/a/a;Lcom/mbridge/msdk/splash/d/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_5
    :goto_3
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public final viewCreateFail(Lcom/mbridge/msdk/dycreator/b/a;)V
    .locals 7

    .line 132
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->b:Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    if-eqz v0, :cond_0

    .line 133
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/a$2;->b:Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    .line 134
    invoke-virtual {v2}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getDyAdType()Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->b:Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    .line 135
    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getTemplateType()I

    move-result v3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "create dynamic view fail "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 136
    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/b/a;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "fail"

    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/a$2;->b:Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    .line 138
    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getCampaignEx()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v6

    .line 133
    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 141
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 143
    :cond_0
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/a$2;->c:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz p1, :cond_2

    .line 144
    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object p1

    if-nez p1, :cond_1

    .line 146
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    .line 148
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->e:Lcom/mbridge/msdk/splash/c/a;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/a$2;->c:Lcom/mbridge/msdk/splash/view/MBSplashView;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/a$2;->d:Lcom/mbridge/msdk/splash/a/c;

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/a$2;->a:Lcom/mbridge/msdk/splash/b/a;

    invoke-static {v0, p1, v1, v2, v3}, Lcom/mbridge/msdk/splash/c/a;->a(Lcom/mbridge/msdk/splash/c/a;Landroid/content/Context;Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;Lcom/mbridge/msdk/splash/b/a;)V

    :cond_2
    return-void
.end method

.method public final viewCreatedSuccess(Landroid/view/View;)V
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/a$2;->a:Lcom/mbridge/msdk/splash/b/a;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 122
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/splash/b/a;->a(Landroid/view/View;)V

    goto :goto_0

    :cond_0
    const-string p1, "View render error."

    .line 124
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/splash/b/a;->a(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
