.class final Lcom/kwad/components/core/webview/b/h$18;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/components/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/b/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$18;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/components/g;)V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$18;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->c(Lcom/kwad/components/core/webview/b/h;)Landroid/app/Activity;

    move-result-object v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->getCurrentActivity()Landroid/app/Activity;

    move-result-object v0

    :cond_0
    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    :cond_1
    new-instance v2, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    invoke-direct {v2}, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;-><init>()V

    :try_start_0
    new-instance v3, Lorg/json/JSONObject;

    invoke-interface {p1}, Lcom/kwad/sdk/components/g;->getStyleTemplate()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v2, v3}, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->parseJson(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    new-instance v1, Lcom/kwad/components/core/webview/b/c/d$b;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/b/c/d$b;-><init>()V

    iget-object v3, p0, Lcom/kwad/components/core/webview/b/h$18;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v3}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/kwad/components/core/webview/b/c/d$b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/webview/b/c/d$b;->a(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V

    iget-object v2, v2, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/webview/b/c/d$b;->aO(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Lcom/kwad/components/core/webview/b/c/d$b;->c(Lcom/kwad/sdk/components/g;)V

    invoke-static {v1}, Lcom/kwad/components/core/webview/b/c/d;->b(Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/components/core/webview/b/c/d;

    move-result-object v1

    invoke-virtual {v0}, Landroid/app/Activity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v0

    const-string v2, ""

    invoke-virtual {v1, v0, v2}, Lcom/kwad/components/core/webview/b/c/d;->show(Landroid/app/FragmentManager;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/h;->rT()Ljava/util/Map;

    move-result-object v0

    invoke-interface {p1}, Lcom/kwad/sdk/components/g;->getDialogId()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    new-instance v2, Ljava/lang/ref/WeakReference;

    invoke-direct {v2, v1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {v0, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    const-string v0, "template parse failed"

    invoke-interface {p1, v1, v0}, Lcom/kwad/sdk/components/g;->callbackPageStatus(ZLjava/lang/String;)V

    return-void

    :cond_2
    :goto_0
    const-string v0, "no host activity"

    invoke-interface {p1, v1, v0}, Lcom/kwad/sdk/components/g;->callbackPageStatus(ZLjava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/h;)V
    .locals 7

    invoke-interface {p1}, Lcom/kwad/sdk/components/h;->getTemplateString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    invoke-interface {p1}, Lcom/kwad/sdk/components/h;->getUrl()Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    invoke-interface {p1}, Lcom/kwad/sdk/components/h;->getClassName()Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v0, "intent invalid"

    :goto_0
    invoke-interface {p1, v1, v0}, Lcom/kwad/sdk/components/h;->callbackPageStatus(ZLjava/lang/String;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$18;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->c(Lcom/kwad/components/core/webview/b/h;)Landroid/app/Activity;

    move-result-object v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->getCurrentActivity()Landroid/app/Activity;

    move-result-object v0

    :cond_1
    if-nez v0, :cond_2

    const-string v2, "no host activity"

    invoke-interface {p1, v1, v2}, Lcom/kwad/sdk/components/h;->callbackPageStatus(ZLjava/lang/String;)V

    :cond_2
    invoke-interface {p1}, Lcom/kwad/sdk/components/h;->getIntent()Landroid/content/Intent;

    move-result-object v2

    const-class v3, Lcom/kwad/sdk/api/proxy/app/FeedDownloadActivity;

    invoke-interface {p1}, Lcom/kwad/sdk/components/h;->getTemplateString()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_4

    const-class v4, Lcom/kwad/components/core/s/a/a;

    invoke-static {v3, v4}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    invoke-static {}, Lcom/kwad/components/core/s/a/a;->qc()I

    move-result v4

    const-string v5, "native_intent"

    invoke-static {v4, v5, p1}, Lcom/kwad/components/core/s/a/a;->a(ILjava/lang/String;Ljava/lang/Object;)V

    iget-object v5, p0, Lcom/kwad/components/core/webview/b/h$18;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v5}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v5

    if-eqz v5, :cond_3

    invoke-virtual {v5}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object v5

    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "tk_ad_template"

    invoke-virtual {v2, v6, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :cond_3
    invoke-interface {p1}, Lcom/kwad/sdk/components/h;->getTemplateString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "tk_style_template"

    invoke-virtual {v2, v6, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v5, "tk_id"

    invoke-virtual {v2, v5, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    :goto_1
    iget-object v4, p0, Lcom/kwad/components/core/webview/b/h$18;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v4, v4, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    invoke-virtual {v2, v4, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_2

    :cond_4
    invoke-interface {p1}, Lcom/kwad/sdk/components/h;->getClassName()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_5

    :try_start_0
    invoke-interface {p1}, Lcom/kwad/sdk/components/h;->getClassName()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v4
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    invoke-static {v3, v4}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    goto :goto_1

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->getMessage()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_5
    invoke-interface {p1}, Lcom/kwad/sdk/components/h;->getUrl()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    :goto_2
    :try_start_1
    invoke-virtual {v0, v2}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    const/4 v0, 0x1

    const/4 v2, 0x0

    invoke-interface {p1, v0, v2}, Lcom/kwad/sdk/components/h;->callbackPageStatus(ZLjava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_0
.end method

.method public final b(Lcom/kwad/sdk/components/g;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/webview/b/h;->rT()Ljava/util/Map;

    move-result-object v0

    invoke-interface {p1}, Lcom/kwad/sdk/components/g;->getDialogId()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/webview/b/c/d;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/c/d;->dismiss()V

    :cond_0
    return-void
.end method
