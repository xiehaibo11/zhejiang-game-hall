.class public Lcom/bianfeng/yidonglogin/YidongLoginInterface;
.super Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;
.source "YidongLoginInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field public static final YIDONGLOGIN_LOGIN:Ljava/lang/String; = "yidonglogin_login"

.field private static volatile isSuc:Z = false

.field private static volatile loginText:Ljava/lang/String; = ""


# instance fields
.field private app_id:Ljava/lang/String;

.field private app_key:Ljava/lang/String;

.field private clause1:Ljava/lang/String;

.field private clause2:Ljava/lang/String;

.field private clause3:Ljava/lang/String;

.field private clause4:Ljava/lang/String;

.field private clause_url1:Ljava/lang/String;

.field private clause_url2:Ljava/lang/String;

.field private clause_url3:Ljava/lang/String;

.field private clause_url4:Ljava/lang/String;

.field private mAuthnHelper:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

.field private mListener:Lcom/cmic/gen/sdk/auth/GenTokenListener;

.field private privacy:Ljava/lang/String;

.field private themeConfigBuilder:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 32
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;-><init>()V

    return-void
.end method

.method static synthetic access$000()Z
    .locals 1

    .line 32
    sget-boolean v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->isSuc:Z

    return v0
.end method

.method static synthetic access$002(Z)Z
    .locals 0

    .line 32
    sput-boolean p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->isSuc:Z

    return p0
.end method

.method static synthetic access$100(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mAuthnHelper:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    return-object p0
.end method

.method private displayLogin()V
    .locals 5

    .line 86
    iget-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mAuthnHelper:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->app_id:Ljava/lang/String;

    iget-object v2, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->app_key:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mListener:Lcom/cmic/gen/sdk/auth/GenTokenListener;

    const/16 v4, 0xd05

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->loginAuth(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/auth/GenTokenListener;I)V

    return-void
.end method

.method private initConfig()V
    .locals 2

    const-string v0, "YIDONGLOGIN_APPID"

    .line 97
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->app_id:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_APPKEY"

    .line 98
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->app_key:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_PRIVACY"

    .line 100
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->privacy:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_CLAUSE1"

    .line 101
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause1:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_CLAUSE_URL1"

    .line 102
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url1:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_CLAUSE2"

    .line 104
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause2:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_CLAUSE_URL2"

    .line 105
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url2:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_CLAUSE3"

    .line 106
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause3:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_CLAUSE_URL3"

    .line 107
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url3:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_CLAUSE4"

    .line 108
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause4:Ljava/lang/String;

    const-string v0, "YIDONGLOGIN_CLAUSE_URL4"

    .line 109
    invoke-virtual {p0, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url4:Ljava/lang/String;

    .line 111
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "app_id---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->app_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 112
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "app_key---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->app_key:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 113
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "privacy---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->privacy:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 114
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "clause1---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause1:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 115
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "clause_url1---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url1:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 116
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "clause2---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause2:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 117
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "clause_url2---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url2:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 118
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "clause3---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause3:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 119
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "clause_url3---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url3:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 120
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "clause4---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause4:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 121
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "clause_url4---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url4:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return-void
.end method

.method private initSdk()V
    .locals 22

    move-object/from16 v0, p0

    .line 126
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "initSdk-->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->app_id:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "--"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->app_key:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const/4 v1, 0x0

    .line 129
    invoke-static {v1}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->setDebugMode(Z)V

    .line 133
    invoke-virtual/range {p0 .. p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v2

    iput-object v2, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mAuthnHelper:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    .line 134
    new-instance v3, Lcom/bianfeng/yidonglogin/YidongLoginInterface$1;

    invoke-direct {v3, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface$1;-><init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)V

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->setPageInListener(Lcom/cmic/gen/sdk/view/GenLoginPageInListener;)V

    .line 143
    new-instance v2, Lcom/bianfeng/yidonglogin/YidongLoginInterface$2;

    invoke-direct {v2, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface$2;-><init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)V

    iput-object v2, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mListener:Lcom/cmic/gen/sdk/auth/GenTokenListener;

    .line 172
    new-instance v2, Landroid/widget/RelativeLayout;

    invoke-virtual/range {p0 .. p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 173
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v3, v4, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 175
    invoke-virtual/range {p0 .. p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getActivity()Landroid/app/Activity;

    move-result-object v3

    invoke-virtual {v3}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v3

    invoke-virtual/range {p0 .. p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getActivity()Landroid/app/Activity;

    move-result-object v5

    const-string v6, "R.layout.yidonglogin_title_layout"

    invoke-static {v5, v6}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5, v2, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v2

    .line 176
    invoke-virtual/range {p0 .. p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getActivity()Landroid/app/Activity;

    move-result-object v3

    const-string v5, "R.id.yidonglogin_back"

    invoke-static {v3, v5}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    const/4 v5, 0x1

    .line 177
    invoke-virtual {v3, v5}, Landroid/widget/TextView;->setClickable(Z)V

    .line 178
    new-instance v6, Lcom/bianfeng/yidonglogin/YidongLoginInterface$3;

    invoke-direct {v6, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface$3;-><init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)V

    invoke-virtual {v3, v6}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 184
    new-instance v3, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    invoke-direct {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;-><init>()V

    const v6, -0xff7930

    .line 185
    invoke-virtual {v3, v6, v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setStatusBar(IZ)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v3

    .line 186
    invoke-virtual {v3, v2}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setAuthContentView(Landroid/view/View;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const/16 v3, 0x14

    .line 187
    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setNavTextSize(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const v6, -0xff7a30

    .line 188
    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setNavTextColor(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const v7, -0xffff01

    .line 189
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setNavColor(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 191
    invoke-virtual {v2, v3, v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setNumberSize(IZ)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const v7, -0xcccccd

    .line 192
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setNumberColor(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const/16 v7, 0x50

    .line 193
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setNumberOffsetX(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const/16 v7, 0x64

    .line 194
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setNumFieldOffsetY_B(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 195
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setNumFieldOffsetY(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 197
    invoke-virtual {v2, v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnTextColor(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const-string v7, "umcsdk_login_btn_bg"

    .line 198
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnImgPath(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const-string v7, ""

    const/16 v8, 0xf

    .line 199
    invoke-virtual {v2, v7, v4, v8, v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnText(Ljava/lang/String;IIZ)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const/16 v4, 0xc8

    .line 200
    invoke-virtual {v2, v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnOffsetY_B(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 201
    invoke-virtual {v2, v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnOffsetY(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const/16 v4, 0x1e

    .line 202
    invoke-virtual {v2, v4, v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnMargin(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 203
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setCheckTipText(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    new-instance v7, Lcom/bianfeng/yidonglogin/YidongLoginInterface$6;

    invoke-direct {v7, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface$6;-><init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)V

    .line 204
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setGenBackPressedListener(Lcom/cmic/gen/sdk/view/GenBackPressedListener;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    new-instance v7, Lcom/bianfeng/yidonglogin/YidongLoginInterface$5;

    invoke-direct {v7, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface$5;-><init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)V

    .line 210
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnClickListener(Lcom/cmic/gen/sdk/view/GenLoginClickListener;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    new-instance v7, Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;

    invoke-direct {v7, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;-><init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)V

    .line 228
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setGenCheckBoxListener(Lcom/cmic/gen/sdk/view/GenCheckBoxListener;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const-string v7, "umcsdk_check_image"

    .line 239
    invoke-virtual {v2, v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setCheckedImgPath(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const-string v8, "umcsdk_uncheck_image"

    .line 240
    invoke-virtual {v2, v8}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setUncheckedImgPath(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const/16 v9, 0x9

    .line 241
    invoke-virtual {v2, v7, v8, v9, v9}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setCheckBoxImgPath(Ljava/lang/String;Ljava/lang/String;II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 242
    invoke-virtual {v2, v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setPrivacyState(Z)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v7

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "\u767b\u5f55\u5373\u540c\u610f$$\u8fd0\u8425\u5546\u6761\u6b3e$$"

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->privacy:Ljava/lang/String;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    iget-object v9, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause1:Ljava/lang/String;

    iget-object v10, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url1:Ljava/lang/String;

    iget-object v11, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause2:Ljava/lang/String;

    iget-object v12, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url2:Ljava/lang/String;

    iget-object v13, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause3:Ljava/lang/String;

    iget-object v14, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url3:Ljava/lang/String;

    iget-object v15, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause4:Ljava/lang/String;

    iget-object v2, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->clause_url4:Ljava/lang/String;

    move-object/from16 v16, v2

    .line 244
    invoke-virtual/range {v7 .. v16}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setPrivacyAlignment(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v16

    const/16 v17, 0xa

    const v18, -0x99999a

    const v19, -0xff7a30

    const/16 v20, 0x0

    const/16 v21, 0x1

    .line 246
    invoke-virtual/range {v16 .. v21}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setPrivacyText(IIIZZ)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const v7, -0x99999a

    .line 247
    invoke-virtual {v2, v7, v6}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setClauseColor(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 249
    invoke-virtual {v2, v3, v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setPrivacyMargin(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 250
    invoke-virtual {v2, v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setPrivacyOffsetY(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    const/16 v3, 0x32

    .line 251
    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setPrivacyOffsetY_B(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 252
    invoke-virtual {v2, v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setCheckBoxLocation(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v2

    .line 253
    invoke-virtual {v2, v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setAppLanguageType(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v1

    .line 254
    invoke-virtual {v1, v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setPrivacyBookSymbol(Z)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v1

    iput-object v1, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->themeConfigBuilder:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    .line 257
    iget-object v2, v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mAuthnHelper:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->build()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->setAuthThemeConfig(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;)V

    return-void
.end method


# virtual methods
.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "30037"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "yidonglogin"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/4 v0, 0x7

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "5.9.6"

    return-object v0
.end method

.method public login()V
    .locals 3

    const/4 v0, 0x0

    .line 76
    sput-boolean v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->isSuc:Z

    .line 77
    iget-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->themeConfigBuilder:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    const/16 v1, 0x12c

    invoke-virtual {v0, v1, v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setAuthPageWindowMode(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v0

    const/16 v1, 0x32

    .line 78
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setNumFieldOffsetY(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v0

    const/16 v1, 0x78

    .line 79
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnOffsetY(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    move-result-object v0

    .line 80
    invoke-virtual {p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "R.style.ymnsdk_yidonglogin_Dialog"

    invoke-static {v1, v2}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setThemeId(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    .line 81
    iget-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mAuthnHelper:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->themeConfigBuilder:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->build()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->setAuthThemeConfig(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;)V

    .line 82
    invoke-direct {p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->displayLogin()V

    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 296
    iget-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mAuthnHelper:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 297
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->setAuthThemeConfig(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;)V

    .line 298
    iget-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mAuthnHelper:Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->setPageInListener(Lcom/cmic/gen/sdk/view/GenLoginPageInListener;)V

    .line 300
    :cond_0
    iput-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->mListener:Lcom/cmic/gen/sdk/auth/GenTokenListener;

    .line 301
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->onDestroy()V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 0

    .line 91
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->onInit(Landroid/content/Context;)V

    .line 92
    invoke-direct {p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->initConfig()V

    .line 93
    invoke-direct {p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->initSdk()V

    return-void
.end method

.method public yidonglogin(Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "yidonglogin_login"
    .end annotation

    const-string v0, "\u767b\u5f55"

    .line 285
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "\u6ce8\u518c"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/16 p1, 0x69

    const-string v0, "\u672a\u6309\u79fb\u52a8\u8981\u6c42\u8bbe\u7f6e\u767b\u5f55\u6309\u94ae\u6587\u5b57"

    .line 286
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 288
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->themeConfigBuilder:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    invoke-virtual {v0, p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnText(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    .line 289
    invoke-virtual {p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->login()V

    :goto_0
    return-void
.end method

.method public yidonglogin(Ljava/util/LinkedHashMap;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "yidonglogin_login"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "loginText"

    .line 263
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 264
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    sput-object v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->loginText:Ljava/lang/String;

    :try_start_0
    const-string v0, "agreePrivacy"

    .line 266
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const-string v0, "1"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    .line 267
    iget-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->themeConfigBuilder:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    invoke-virtual {v0, p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setPrivacyState(Z)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    nop

    .line 270
    :goto_0
    sget-object p1, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->loginText:Ljava/lang/String;

    const-string v0, "\u767b\u5f55"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    sget-object p1, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->loginText:Ljava/lang/String;

    const-string v0, "\u6ce8\u518c"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    const/16 p1, 0x69

    const-string v0, "\u672a\u6309\u79fb\u52a8\u8981\u6c42\u8bbe\u7f6e\u767b\u5f55\u6309\u94ae\u6587\u5b57"

    .line 271
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_1

    .line 273
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->themeConfigBuilder:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    sget-object v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->loginText:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnText(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    .line 274
    invoke-virtual {p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->login()V

    goto :goto_1

    .line 278
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->themeConfigBuilder:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    const-string v0, ""

    invoke-virtual {p1, v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->setLogBtnText(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;

    .line 279
    invoke-virtual {p0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->login()V

    :goto_1
    return-void
.end method
