.class public Lcom/mbridge/msdk/activity/DomainMBCommonActivity;
.super Landroid/app/Activity;
.source "DomainMBCommonActivity.java"


# instance fields
.field a:Ljava/lang/String;

.field private b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field protected browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

.field private c:Lcom/mbridge/msdk/foundation/webview/BrowserView$a;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 38
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const-string v0, ""

    .line 41
    iput-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->a:Ljava/lang/String;

    .line 128
    new-instance v0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity$1;-><init>(Lcom/mbridge/msdk/activity/DomainMBCommonActivity;)V

    iput-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->c:Lcom/mbridge/msdk/foundation/webview/BrowserView$a;

    return-void
.end method

.method private a(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 8

    const-string v0, "http"

    const-string v1, "MBCommonActivity"

    const/4 v2, 0x0

    .line 166
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    return v2

    .line 172
    :cond_0
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    .line 173
    invoke-virtual {v3}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v5, "https"

    const/4 v6, 0x1

    if-nez v4, :cond_2

    :try_start_1
    invoke-virtual {v3}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    goto :goto_0

    :cond_1
    move v4, v2

    goto :goto_1

    :cond_2
    :goto_0
    move v4, v6

    :goto_1
    if-eqz v4, :cond_3

    return v2

    .line 179
    :cond_3
    invoke-virtual {v3}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v3

    const-string v4, "intent"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_8

    .line 180
    invoke-static {p2, v6}, Landroid/content/Intent;->parseUri(Ljava/lang/String;I)Landroid/content/Intent;

    move-result-object v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 183
    :try_start_2
    invoke-virtual {v3}, Landroid/content/Intent;->getPackage()Ljava/lang/String;

    move-result-object v4

    .line 184
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_4

    invoke-virtual {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v7

    invoke-virtual {v7, v4}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v4

    if-eqz v4, :cond_4

    const/high16 v4, 0x10000000

    .line 185
    invoke-virtual {v3, v4}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 186
    invoke-virtual {p0, v3, v2}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->startActivityForResult(Landroid/content/Intent;I)V

    .line 187
    invoke-virtual {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->finish()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return v6

    :catchall_0
    move-exception v4

    .line 191
    :try_start_3
    invoke-virtual {v4}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :cond_4
    :try_start_4
    const-string v4, "browser_fallback_url"

    .line 196
    invoke-virtual {v3, v4}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 197
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 198
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v4

    .line 199
    invoke-virtual {v4}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-virtual {v4}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    goto :goto_2

    :cond_5
    move v0, v2

    goto :goto_3

    :cond_6
    :goto_2
    move v0, v6

    :goto_3
    if-eqz v0, :cond_7

    .line 201
    invoke-virtual {p1, v3}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    return v2

    :cond_7
    move-object p2, v3

    goto :goto_4

    :catchall_1
    move-exception p1

    .line 208
    :try_start_5
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 212
    :cond_8
    :goto_4
    invoke-static {p0, p2}, Lcom/mbridge/msdk/click/c;->e(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_9

    const-string p1, "openDeepLink"

    .line 213
    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 214
    invoke-virtual {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->finish()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    return v6

    :cond_9
    return v2

    :catchall_2
    move-exception p1

    .line 220
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v2
.end method

.method static synthetic a(Lcom/mbridge/msdk/activity/DomainMBCommonActivity;Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 0

    .line 38
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->a(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 9

    .line 47
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const/4 p1, 0x1

    .line 50
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->requestWindowFeature(I)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 52
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBCommonActivity"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "intent_flag"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 56
    invoke-virtual {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    const-string v2, "intent_jsonobject"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 57
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, "shortcuts"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 59
    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 60
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 62
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 65
    :goto_1
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 67
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 69
    :cond_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/db/f;->d(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    .line 70
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2, p0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Landroid/content/Context;)V

    if-eqz v1, :cond_1

    .line 72
    iget-object v2, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIsClick()I

    move-result v1

    if-nez v1, :cond_1

    .line 73
    iget-object v3, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object v4

    iget-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x1

    sget v8, Lcom/mbridge/msdk/click/a/a;->g:I

    move-object v2, p0

    invoke-static/range {v2 .. v8}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 76
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsClick(I)V

    .line 77
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "is_click"

    .line 78
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 79
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1, v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;Landroid/content/ContentValues;)V

    .line 81
    new-instance p1, Landroid/widget/LinearLayout;

    invoke-direct {p1, p0}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 82
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 83
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->setContentView(Landroid/view/View;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_3

    :catch_1
    move-exception p1

    .line 85
    invoke-virtual {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->finish()V

    .line 86
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_3

    .line 1094
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "url"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->a:Ljava/lang/String;

    .line 1096
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    .line 1097
    invoke-virtual {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "mvcommon"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p1, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1098
    sget-object p1, Lcom/mbridge/msdk/foundation/webview/b;->a:Ljava/util/HashMap;

    iget-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 1099
    sget-object p1, Lcom/mbridge/msdk/foundation/webview/b;->a:Ljava/util/HashMap;

    iget-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/webview/BrowserView;

    iput-object p1, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    if-eqz p1, :cond_4

    .line 1101
    iget-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->c:Lcom/mbridge/msdk/foundation/webview/BrowserView$a;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->setListener(Lcom/mbridge/msdk/foundation/webview/BrowserView$a;)V

    goto :goto_2

    .line 1104
    :cond_3
    new-instance p1, Lcom/mbridge/msdk/foundation/webview/BrowserView;

    iget-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p1, p0, v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iput-object p1, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    .line 1105
    iget-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->c:Lcom/mbridge/msdk/foundation/webview/BrowserView$a;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->setListener(Lcom/mbridge/msdk/foundation/webview/BrowserView$a;)V

    .line 1106
    iget-object p1, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    iget-object v0, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->loadUrl(Ljava/lang/String;)V

    .line 1110
    :cond_4
    :goto_2
    iget-object p1, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    if-eqz p1, :cond_6

    .line 1111
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/an;->a(Landroid/view/View;)V

    .line 1112
    iget-object p1, p0, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->setContentView(Landroid/view/View;)V

    goto :goto_3

    :cond_5
    const/4 p1, 0x0

    const-string v0, "Error: no data"

    .line 1115
    invoke-static {p0, v0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    :cond_6
    :goto_3
    return-void
.end method

.method public setTheme(I)V
    .locals 1

    .line 122
    invoke-virtual {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "intent_flag"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 123
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "shortcuts"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const p1, 0x1030010

    .line 124
    invoke-super {p0, p1}, Landroid/app/Activity;->setTheme(I)V

    :cond_0
    return-void
.end method
