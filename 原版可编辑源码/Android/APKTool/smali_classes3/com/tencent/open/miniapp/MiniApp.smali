.class public Lcom/tencent/open/miniapp/MiniApp;
.super Lcom/tencent/connect/common/BaseApi;
.source "ProGuard"


# static fields
.field public static final MINIAPP_CONTEXT_NULL:I = -0x6

.field public static final MINIAPP_ID_EMPTY:I = -0x1

.field public static final MINIAPP_ID_NOT_DIGIT:I = -0x4

.field public static final MINIAPP_SHOULD_DOWNLOAD:I = -0x2

.field public static final MINIAPP_SRC_ID:Ljava/lang/String; = "21"

.field public static final MINIAPP_SRC_ID_NOT_DIGIT:I = -0x3

.field public static final MINIAPP_SUCCESS:I = 0x0

.field public static final MINIAPP_TYPE_NORMAL:Ljava/lang/String; = "mini_program_or_game"

.field public static final MINIAPP_UNKNOWN_TYPE:I = -0x5

.field public static final MINIAPP_VERSION_DEVELOP:Ljava/lang/String; = "develop"

.field public static final MINIAPP_VERSION_RELEASE:Ljava/lang/String; = "release"

.field public static final MINIAPP_VERSION_TRIAL:Ljava/lang/String; = "trial"

.field public static final MINIAPP_VERSION_WRONG:I = -0x7

.field public static final OPEN_CONNECT_DEMO_MINI_APP_VERSIONS:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const-string v0, "develop"

    const-string v1, "trial"

    const-string v2, "release"

    .line 43
    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/tencent/open/miniapp/MiniApp;->OPEN_CONNECT_DEMO_MINI_APP_VERSIONS:Ljava/util/List;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tencent/connect/auth/QQToken;)V
    .locals 0

    .line 51
    invoke-direct {p0, p2}, Lcom/tencent/connect/common/BaseApi;-><init>(Lcom/tencent/connect/auth/QQToken;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tencent/connect/auth/c;Lcom/tencent/connect/auth/QQToken;)V
    .locals 0

    .line 47
    invoke-direct {p0, p2, p3}, Lcom/tencent/connect/common/BaseApi;-><init>(Lcom/tencent/connect/auth/c;Lcom/tencent/connect/auth/QQToken;)V

    return-void
.end method

.method public constructor <init>(Lcom/tencent/connect/auth/QQToken;)V
    .locals 0

    .line 55
    invoke-direct {p0, p1}, Lcom/tencent/connect/common/BaseApi;-><init>(Lcom/tencent/connect/auth/QQToken;)V

    return-void
.end method


# virtual methods
.method public startMiniApp(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
    .locals 13

    move-object v1, p0

    move-object v0, p1

    move-object v2, p2

    move-object/from16 v3, p3

    const-string v8, "openSDK_LOG.MiniApp"

    const/4 v4, 0x0

    .line 77
    invoke-static {v8, v4}, Lcom/tencent/connect/a;->a(Ljava/lang/String;Lcom/tencent/tauth/IUiListener;)Z

    move-result v4

    const/4 v5, -0x5

    if-eqz v4, :cond_0

    return v5

    :cond_0
    if-nez v0, :cond_1

    const-string v0, "Result is MINIAPP_CONTEXT_NULL : -6"

    .line 82
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, -0x6

    return v0

    :cond_1
    const-string v4, "mini_program_or_game"

    .line 86
    invoke-virtual {v4, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_2

    const-string v0, "Result is MINIAPP_UNKNOWN_TYPE : -5"

    .line 87
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return v5

    .line 90
    :cond_2
    invoke-static/range {p3 .. p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    const-string v0, "Result is MINIAPP_ID_EMPTY : -1"

    .line 91
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, -0x1

    return v0

    :cond_3
    const/4 v4, 0x0

    const/4 v5, 0x0

    .line 95
    :goto_0
    invoke-virtual/range {p3 .. p3}, Ljava/lang/String;->length()I

    move-result v6

    if-ge v5, v6, :cond_5

    .line 96
    invoke-virtual {v3, v5}, Ljava/lang/String;->charAt(I)C

    move-result v6

    invoke-static {v6}, Ljava/lang/Character;->isDigit(C)Z

    move-result v6

    if-nez v6, :cond_4

    const-string v0, "Result is MINIAPP_ID_NOT_DIGIT : -4"

    .line 97
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, -0x4

    return v0

    :cond_4
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_5
    const-string v5, ""

    if-nez p5, :cond_6

    move-object v6, v5

    goto :goto_1

    :cond_6
    move-object/from16 v6, p5

    .line 106
    :goto_1
    sget-object v7, Lcom/tencent/open/miniapp/MiniApp;->OPEN_CONNECT_DEMO_MINI_APP_VERSIONS:Ljava/util/List;

    move-object/from16 v9, p6

    invoke-interface {v7, v9}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_7

    const-string v0, "Result is MINIAPP_VERSION_WRONG : -7"

    .line 107
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, -0x7

    return v0

    .line 110
    :cond_7
    invoke-static {p1}, Lcom/tencent/open/utils/m;->e(Landroid/content/Context;)Z

    move-result v7

    const/4 v10, -0x2

    const-string v11, "Show download dialog exception:"

    if-eqz v7, :cond_8

    .line 111
    new-instance v7, Landroid/content/Intent;

    const-string v12, "android.intent.action.VIEW"

    invoke-direct {v7, v12}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v12, "com.tencent.mobileqq"

    .line 112
    invoke-virtual {v7, v12}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    const/16 v12, 0x8

    new-array v12, v12, [Ljava/lang/Object;

    aput-object v2, v12, v4

    const/4 v2, 0x1

    aput-object v3, v12, v2

    const/4 v2, 0x2

    .line 114
    invoke-static {p1}, Lcom/tencent/open/utils/k;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tencent/open/utils/m;->k(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v12, v2

    const/4 v2, 0x3

    iget-object v3, v1, Lcom/tencent/open/miniapp/MiniApp;->c:Lcom/tencent/connect/auth/QQToken;

    invoke-virtual {v3}, Lcom/tencent/connect/auth/QQToken;->getAppId()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tencent/open/utils/m;->k(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v12, v2

    const/4 v2, 0x4

    aput-object p4, v12, v2

    const/4 v2, 0x5

    .line 115
    invoke-static {v6}, Lcom/tencent/open/utils/m;->k(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v12, v2

    const/4 v2, 0x6

    invoke-static/range {p6 .. p6}, Lcom/tencent/open/utils/m;->k(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v12, v2

    const/4 v2, 0x7

    iget-object v3, v1, Lcom/tencent/open/miniapp/MiniApp;->c:Lcom/tencent/connect/auth/QQToken;

    .line 116
    invoke-virtual {v3}, Lcom/tencent/connect/auth/QQToken;->getOpenId()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tencent/open/utils/m;->k(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v12, v2

    const-string v2, "mqqapi://connect_miniapp/launch?app_type=%1$s&mini_app_id=%2$s&version=1&src_type=app&app_name=%3$s&app_id=%4$s&src_id=%5$s&mini_app_path=%6$s&mini_app_type=%7$s&open_id=%8$s"

    .line 113
    invoke-static {v2, v12}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    .line 117
    invoke-virtual {v7, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 119
    invoke-virtual {p1}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v2

    const-string v3, "pkg_name"

    .line 120
    invoke-virtual {v7, v3, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 122
    :try_start_0
    invoke-virtual {p1, v7}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/content/ActivityNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v0, "Result is MINIAPP_SUCCESS : 0"

    .line 144
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return v4

    .line 126
    :catch_0
    :try_start_1
    new-instance v9, Lcom/tencent/open/TDialog;

    const-string v4, ""

    invoke-virtual {p0, v5}, Lcom/tencent/open/miniapp/MiniApp;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    iget-object v7, v1, Lcom/tencent/open/miniapp/MiniApp;->c:Lcom/tencent/connect/auth/QQToken;

    move-object v2, v9

    move-object v3, p1

    invoke-direct/range {v2 .. v7}, Lcom/tencent/open/TDialog;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tencent/tauth/IUiListener;Lcom/tencent/connect/auth/QQToken;)V

    invoke-virtual {v9}, Lcom/tencent/open/TDialog;->show()V
    :try_end_1
    .catch Ljava/lang/RuntimeException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    move-exception v0

    .line 128
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/RuntimeException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    const-string v0, "QQ is not installed, Result is MINIAPP_SHOULD_DOWNLOAD : -2"

    .line 130
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return v10

    .line 136
    :cond_8
    :try_start_2
    new-instance v9, Lcom/tencent/open/TDialog;

    const-string v4, ""

    invoke-virtual {p0, v5}, Lcom/tencent/open/miniapp/MiniApp;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    iget-object v7, v1, Lcom/tencent/open/miniapp/MiniApp;->c:Lcom/tencent/connect/auth/QQToken;

    move-object v2, v9

    move-object v3, p1

    invoke-direct/range {v2 .. v7}, Lcom/tencent/open/TDialog;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tencent/tauth/IUiListener;Lcom/tencent/connect/auth/QQToken;)V

    invoke-virtual {v9}, Lcom/tencent/open/TDialog;->show()V
    :try_end_2
    .catch Ljava/lang/RuntimeException; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_3

    :catch_2
    move-exception v0

    .line 138
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/RuntimeException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    const-string v0, "Result is MINIAPP_SHOULD_DOWNLOAD : -2"

    .line 140
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return v10
.end method
