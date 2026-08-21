.class public Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;
.super Landroid/app/Activity;
.source "GenLoginAuthActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$b;,
        Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;,
        Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;
    }
.end annotation


# static fields
.field protected static final a:Ljava/lang/String;


# instance fields
.field private A:Ljava/lang/String;

.field private B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

.field private C:I

.field private D:I

.field private E:Z

.field private F:Landroid/app/Dialog;

.field private b:Landroid/os/Handler;

.field private c:Landroid/content/Context;

.field private d:Landroid/widget/RelativeLayout;

.field private e:Lcom/cmic/gen/sdk/view/d;

.field private f:Lcom/cmic/gen/sdk/view/d;

.field private g:Lcom/cmic/gen/sdk/view/d;

.field private h:Lcom/cmic/gen/sdk/view/d;

.field private i:Lcom/cmic/gen/sdk/view/d;

.field private j:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/cmic/gen/sdk/view/d;",
            ">;"
        }
    .end annotation
.end field

.field private k:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private l:[Ljava/lang/String;

.field private m:Lcom/cmic/gen/sdk/a;

.field private n:Lcom/cmic/gen/sdk/auth/a;

.field private o:Ljava/lang/String;

.field private p:Landroid/widget/CheckBox;

.field private q:Landroid/widget/RelativeLayout;

.field private r:Landroid/widget/RelativeLayout;

.field private s:J

.field private t:I

.field private u:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;

.field private v:Lcom/cmic/gen/sdk/auth/GenTokenListener;

.field private w:Z

.field private x:Landroid/widget/RelativeLayout;

.field private y:Ljava/lang/String;

.field private z:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 70
    const-class v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 69
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const-string v0, ""

    .line 81
    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->o:Ljava/lang/String;

    const-wide/16 v1, 0x0

    .line 86
    iput-wide v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->s:J

    const/4 v1, 0x0

    .line 87
    iput v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->t:I

    const/4 v1, 0x0

    .line 88
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->u:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;

    const/4 v1, 0x1

    .line 90
    iput-boolean v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->w:Z

    .line 95
    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->A:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;I)I
    .locals 1

    .line 69
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->t:I

    add-int/2addr v0, p1

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->t:I

    return v0
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->e:Lcom/cmic/gen/sdk/view/d;

    return-object p0
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V
    .locals 0

    .line 69
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;Z)V
    .locals 0

    .line 69
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Z)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V
    .locals 4

    .line 868
    :try_start_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b:Landroid/os/Handler;

    if-nez v0, :cond_0

    .line 869
    new-instance v0, Landroid/os/Handler;

    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b:Landroid/os/Handler;

    .line 870
    new-instance v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;

    invoke-direct {v0, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->u:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;

    .line 872
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    const-string v0, "103000"

    .line 873
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x1

    const-string v2, "keepListener"

    const-string v3, "traceId"

    if-eqz v0, :cond_1

    .line 875
    :try_start_1
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 876
    invoke-virtual {p3, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/cmic/gen/sdk/e/e;->c(Ljava/lang/String;)Lcom/cmic/gen/sdk/auth/GenTokenListener;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 881
    invoke-virtual {p3, v2, v1}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Z)V

    .line 882
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->callBackResult(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    goto :goto_0

    :cond_1
    const-string v0, "200020"

    .line 887
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 888
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 889
    invoke-virtual {p3, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/cmic/gen/sdk/e/e;->c(Ljava/lang/String;)Lcom/cmic/gen/sdk/auth/GenTokenListener;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 890
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->callBackResult(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    .line 891
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a()V

    goto :goto_0

    .line 893
    :cond_2
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a()V

    goto :goto_0

    .line 897
    :cond_3
    invoke-virtual {p3, v2, v1}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Z)V

    .line 898
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->callBackResult(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 903
    sget-object p2, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string p3, "CallbackResult:\u672a\u77e5\u9519\u8bef"

    invoke-static {p2, p3}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 904
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_0
    return-void
.end method

.method private a(Z)V
    .locals 3

    :try_start_0
    const-string p1, "authPageOut"

    .line 731
    invoke-static {p1}, Lcom/cmic/gen/sdk/d/a;->a(Ljava/lang/String;)V

    const-string p1, "200020"

    const-string v0, "\u767b\u5f55\u9875\u9762\u5173\u95ed"

    .line 735
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const/4 v2, 0x0

    invoke-direct {p0, p1, v0, v1, v2}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 737
    sget-object v0, Lcom/cmic/gen/sdk/d/c;->b:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 738
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->f:Lcom/cmic/gen/sdk/view/d;

    return-object p0
.end method

.method static synthetic b(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->w:Z

    return p1
.end method

.method static synthetic c(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->g:Lcom/cmic/gen/sdk/view/d;

    return-object p0
.end method

.method static synthetic d(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->h:Lcom/cmic/gen/sdk/view/d;

    return-object p0
.end method

.method private d()V
    .locals 7

    .line 161
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "traceId"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/cmic/gen/sdk/e/e;->d(Ljava/lang/String;)Lcom/cmic/gen/sdk/a;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const/4 v2, 0x0

    if-nez v0, :cond_0

    .line 163
    new-instance v0, Lcom/cmic/gen/sdk/a;

    invoke-direct {v0, v2}, Lcom/cmic/gen/sdk/a;-><init>(I)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    .line 165
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const-string v3, ""

    invoke-virtual {v0, v1, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 166
    invoke-static {v0}, Lcom/cmic/gen/sdk/e/e;->c(Ljava/lang/String;)Lcom/cmic/gen/sdk/auth/GenTokenListener;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->v:Lcom/cmic/gen/sdk/auth/GenTokenListener;

    .line 167
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    .line 168
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v1

    invoke-interface {v1}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 169
    new-instance v0, Landroid/os/Handler;

    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b:Landroid/os/Handler;

    .line 170
    new-instance v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;

    invoke-direct {v0, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->u:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;

    .line 171
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const-string v1, "securityphone"

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->o:Ljava/lang/String;

    .line 172
    sget-object v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mSecurityPhone value is "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->o:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 174
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const-string v1, "operatortype"

    invoke-virtual {v0, v1, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 176
    sget-object v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "operator value is "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getAppLanguageType()I

    move-result v1

    const/4 v3, 0x2

    const/4 v4, 0x1

    if-ne v1, v4, :cond_1

    .line 178
    sget-object v1, Lcom/cmic/gen/sdk/c;->b:[Ljava/lang/String;

    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->l:[Ljava/lang/String;

    .line 179
    sget-object v1, Lcom/cmic/gen/sdk/c;->e:[Ljava/lang/String;

    aget-object v1, v1, v4

    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->A:Ljava/lang/String;

    goto :goto_0

    .line 180
    :cond_1
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getAppLanguageType()I

    move-result v1

    if-ne v1, v3, :cond_2

    .line 181
    sget-object v1, Lcom/cmic/gen/sdk/c;->c:[Ljava/lang/String;

    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->l:[Ljava/lang/String;

    .line 182
    sget-object v1, Lcom/cmic/gen/sdk/c;->e:[Ljava/lang/String;

    aget-object v1, v1, v3

    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->A:Ljava/lang/String;

    goto :goto_0

    .line 184
    :cond_2
    sget-object v1, Lcom/cmic/gen/sdk/c;->a:[Ljava/lang/String;

    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->l:[Ljava/lang/String;

    .line 185
    sget-object v1, Lcom/cmic/gen/sdk/c;->e:[Ljava/lang/String;

    aget-object v1, v1, v2

    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->A:Ljava/lang/String;

    :goto_0
    const-string v1, "1"

    .line 187
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 188
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->l:[Ljava/lang/String;

    aget-object v0, v0, v2

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->y:Ljava/lang/String;

    const-string v0, "https://wap.cmpassport.com/resources/html/contract.html"

    goto :goto_1

    :cond_3
    const-string v1, "3"

    .line 190
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 191
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->l:[Ljava/lang/String;

    aget-object v0, v0, v4

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->y:Ljava/lang/String;

    const-string v0, "https://e.189.cn/sdk/agreement/detail.do?hidetop=true"

    goto :goto_1

    .line 194
    :cond_4
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->l:[Ljava/lang/String;

    aget-object v0, v0, v3

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->y:Ljava/lang/String;

    const-string v0, "https://opencloud.wostore.cn/authz/resource/html/disclaimer.html?fromsdk=true"

    .line 197
    :goto_1
    new-instance v1, Lcom/cmic/gen/sdk/view/d;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->y:Ljava/lang/String;

    const v6, 0x1030010

    invoke-direct {v1, v3, v6, v5, v0}, Lcom/cmic/gen/sdk/view/d;-><init>(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->e:Lcom/cmic/gen/sdk/view/d;

    .line 199
    new-instance v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$1;

    invoke-direct {v0, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$1;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v1, v0}, Lcom/cmic/gen/sdk/view/d;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    .line 209
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->j:Ljava/util/ArrayList;

    .line 210
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    .line 211
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 212
    new-instance v0, Lcom/cmic/gen/sdk/view/d;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    .line 213
    invoke-virtual {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseName()Ljava/lang/String;

    move-result-object v3

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseUrl()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v0, v1, v6, v3, v5}, Lcom/cmic/gen/sdk/view/d;-><init>(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->f:Lcom/cmic/gen/sdk/view/d;

    .line 214
    new-instance v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$4;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$4;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/view/d;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    .line 224
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->j:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->f:Lcom/cmic/gen/sdk/view/d;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 225
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 227
    :cond_5
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseUrl2()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 228
    new-instance v0, Lcom/cmic/gen/sdk/view/d;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    .line 229
    invoke-virtual {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseName2()Ljava/lang/String;

    move-result-object v3

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseUrl2()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v0, v1, v6, v3, v5}, Lcom/cmic/gen/sdk/view/d;-><init>(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->g:Lcom/cmic/gen/sdk/view/d;

    .line 230
    new-instance v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$5;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$5;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/view/d;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    .line 240
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->j:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->g:Lcom/cmic/gen/sdk/view/d;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 241
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseName2()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 244
    :cond_6
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseUrl3()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 245
    new-instance v0, Lcom/cmic/gen/sdk/view/d;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    .line 246
    invoke-virtual {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseName3()Ljava/lang/String;

    move-result-object v3

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseUrl3()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v0, v1, v6, v3, v5}, Lcom/cmic/gen/sdk/view/d;-><init>(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->h:Lcom/cmic/gen/sdk/view/d;

    .line 247
    new-instance v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$6;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$6;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/view/d;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    .line 257
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->j:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->h:Lcom/cmic/gen/sdk/view/d;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 258
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseName3()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 261
    :cond_7
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseUrl4()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    .line 262
    new-instance v0, Lcom/cmic/gen/sdk/view/d;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    .line 263
    invoke-virtual {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseName4()Ljava/lang/String;

    move-result-object v3

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseUrl4()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v0, v1, v6, v3, v5}, Lcom/cmic/gen/sdk/view/d;-><init>(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->i:Lcom/cmic/gen/sdk/view/d;

    .line 264
    new-instance v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$7;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$7;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/view/d;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    .line 274
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->j:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->i:Lcom/cmic/gen/sdk/view/d;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 275
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseName4()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 277
    :cond_8
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->j()Ljava/lang/String;

    .line 278
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isPrivacyBookSymbol()Z

    move-result v0

    if-eqz v0, :cond_9

    const/4 v0, 0x0

    .line 279
    :goto_2
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_9

    new-array v1, v4, [Ljava/lang/Object;

    .line 280
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    invoke-virtual {v3, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v3, "\u300a%s\u300b"

    invoke-static {v3, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    .line 281
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    invoke-virtual {v5, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {v3, v5, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    .line 282
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    invoke-virtual {v3, v0, v1}, Ljava/util/ArrayList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    .line 286
    :cond_9
    invoke-static {}, Lcom/cmic/gen/sdk/view/b;->a()Lcom/cmic/gen/sdk/view/b;

    move-result-object v0

    new-instance v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$8;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/view/b;->a(Lcom/cmic/gen/sdk/view/b$a;)V

    return-void
.end method

.method static synthetic e(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->i:Lcom/cmic/gen/sdk/view/d;

    return-object p0
.end method

.method private e()V
    .locals 11

    .line 303
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    .line 304
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumFieldOffsetY()I

    move-result v1

    const/16 v2, 0xa

    const/16 v3, 0xc

    const/4 v4, -0x1

    const/4 v5, 0x0

    if-gtz v1, :cond_2

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumFieldOffsetY_B()I

    move-result v1

    if-gez v1, :cond_0

    goto :goto_0

    .line 317
    :cond_0
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumFieldOffsetY_B()I

    move-result v1

    if-lez v1, :cond_1

    iget v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    .line 318
    invoke-virtual {v6}, Landroid/widget/RelativeLayout;->getMeasuredHeight()I

    move-result v6

    sub-int/2addr v1, v6

    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumFieldOffsetY_B()I

    move-result v7

    int-to-float v7, v7

    invoke-static {v6, v7}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v6

    sub-int/2addr v1, v6

    if-lez v1, :cond_1

    .line 319
    sget-object v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string v6, "numberField_bottom"

    invoke-static {v1, v6}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 320
    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 321
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v6}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumFieldOffsetY_B()I

    move-result v6

    int-to-float v6, v6

    invoke-static {v1, v6}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {v0, v5, v5, v5, v1}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_1

    .line 323
    :cond_1
    invoke-virtual {v0, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto :goto_1

    .line 305
    :cond_2
    :goto_0
    invoke-static {v5, v5}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v1

    .line 306
    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {v6, v1, v1}, Landroid/widget/RelativeLayout;->measure(II)V

    .line 307
    sget-object v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mPhoneLayout.getMeasuredHeight()="

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {v7}, Landroid/widget/RelativeLayout;->getMeasuredHeight()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 308
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumFieldOffsetY()I

    move-result v1

    if-lez v1, :cond_3

    iget v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    .line 309
    invoke-virtual {v6}, Landroid/widget/RelativeLayout;->getMeasuredHeight()I

    move-result v6

    sub-int/2addr v1, v6

    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumFieldOffsetY()I

    move-result v7

    int-to-float v7, v7

    invoke-static {v6, v7}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v6

    sub-int/2addr v1, v6

    if-lez v1, :cond_3

    .line 310
    sget-object v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string v6, "numberField_top"

    invoke-static {v1, v6}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 311
    invoke-virtual {v0, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 312
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v6}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumFieldOffsetY()I

    move-result v6

    int-to-float v6, v6

    invoke-static {v1, v6}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {v0, v5, v1, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_1

    .line 314
    :cond_3
    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 326
    :goto_1
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 328
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    .line 329
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnMarginLeft()I

    move-result v1

    invoke-static {v1, v5}, Ljava/lang/Math;->max(II)I

    move-result v1

    .line 330
    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v6}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnMarginRight()I

    move-result v6

    invoke-static {v6, v5}, Ljava/lang/Math;->max(II)I

    move-result v6

    .line 331
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnOffsetY()I

    move-result v7

    if-gtz v7, :cond_6

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnOffsetY_B()I

    move-result v7

    if-gez v7, :cond_4

    goto :goto_2

    .line 343
    :cond_4
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnOffsetY_B()I

    move-result v7

    if-lez v7, :cond_5

    iget v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v9, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    .line 344
    invoke-virtual {v9}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnHeight()I

    move-result v9

    iget-object v10, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v10}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnOffsetY_B()I

    move-result v10

    add-int/2addr v9, v10

    int-to-float v9, v9

    invoke-static {v8, v9}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v8

    sub-int/2addr v7, v8

    if-lez v7, :cond_5

    .line 345
    sget-object v7, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string v8, "logBtn_bottom"

    invoke-static {v7, v8}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 346
    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 347
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v1, v1

    invoke-static {v7, v1}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v6, v6

    .line 348
    invoke-static {v7, v6}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v6

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v8}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnOffsetY_B()I

    move-result v8

    int-to-float v8, v8

    invoke-static {v7, v8}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v7

    .line 347
    invoke-virtual {v0, v1, v5, v6, v7}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_3

    .line 350
    :cond_5
    invoke-virtual {v0, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 351
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v1, v1

    invoke-static {v7, v1}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v6, v6

    invoke-static {v7, v6}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v6

    invoke-virtual {v0, v1, v5, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_3

    .line 332
    :cond_6
    :goto_2
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnOffsetY()I

    move-result v7

    if-lez v7, :cond_7

    iget v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v9, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    .line 333
    invoke-virtual {v9}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnHeight()I

    move-result v9

    iget-object v10, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v10}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnOffsetY()I

    move-result v10

    add-int/2addr v9, v10

    int-to-float v9, v9

    invoke-static {v8, v9}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v8

    sub-int/2addr v7, v8

    if-lez v7, :cond_7

    .line 334
    sget-object v7, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string v8, "logBtn_top"

    invoke-static {v7, v8}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 335
    invoke-virtual {v0, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 336
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v1, v1

    invoke-static {v7, v1}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v8}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnOffsetY()I

    move-result v8

    int-to-float v8, v8

    invoke-static {v7, v8}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v7

    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v6, v6

    .line 337
    invoke-static {v8, v6}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v6

    .line 336
    invoke-virtual {v0, v1, v7, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_3

    .line 339
    :cond_7
    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 340
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v1, v1

    invoke-static {v7, v1}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v6, v6

    invoke-static {v7, v6}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v6

    invoke-virtual {v0, v1, v5, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 354
    :goto_3
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 356
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    .line 358
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyMarginLeft()I

    move-result v1

    const/16 v6, 0x1e

    if-ltz v1, :cond_9

    .line 359
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckedImgWidth()I

    move-result v1

    if-le v1, v6, :cond_8

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyMarginLeft()I

    move-result v1

    goto :goto_4

    :cond_8
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyMarginLeft()I

    move-result v1

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckedImgWidth()I

    move-result v7

    sub-int/2addr v6, v7

    sub-int/2addr v1, v6

    goto :goto_4

    .line 361
    :cond_9
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckedImgWidth()I

    move-result v1

    if-le v1, v6, :cond_a

    const/4 v1, 0x0

    goto :goto_4

    :cond_a
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckedImgWidth()I

    move-result v1

    sub-int/2addr v6, v1

    neg-int v1, v6

    .line 363
    :goto_4
    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v6}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyMarginRight()I

    move-result v6

    invoke-static {v6, v5}, Ljava/lang/Math;->max(II)I

    move-result v6

    .line 364
    invoke-static {v5, v5}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v7

    .line 365
    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    invoke-virtual {v8, v7, v7}, Landroid/widget/RelativeLayout;->measure(II)V

    .line 366
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyOffsetY()I

    move-result v7

    const-string v8, "privacy_bottom="

    if-gtz v7, :cond_d

    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyOffsetY_B()I

    move-result v7

    if-gez v7, :cond_b

    goto/16 :goto_5

    .line 379
    :cond_b
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyOffsetY_B()I

    move-result v7

    if-lez v7, :cond_c

    iget v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    iget-object v9, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    .line 380
    invoke-virtual {v9}, Landroid/widget/RelativeLayout;->getMeasuredHeight()I

    move-result v9

    sub-int/2addr v7, v9

    iget-object v9, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v10, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v10}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyOffsetY_B()I

    move-result v10

    int-to-float v10, v10

    invoke-static {v9, v10}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v9

    sub-int/2addr v7, v9

    if-lez v7, :cond_c

    .line 381
    sget-object v2, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    invoke-virtual {v8}, Landroid/widget/RelativeLayout;->getMeasuredHeight()I

    move-result v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 382
    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 383
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v1, v1

    invoke-static {v2, v1}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v3, v6

    .line 384
    invoke-static {v2, v3}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v2

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyOffsetY_B()I

    move-result v4

    int-to-float v4, v4

    invoke-static {v3, v4}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v3

    .line 383
    invoke-virtual {v0, v1, v5, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto/16 :goto_6

    .line 386
    :cond_c
    invoke-virtual {v0, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 387
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v1, v1

    invoke-static {v2, v1}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v3, v6

    invoke-static {v2, v3}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v0, v1, v5, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 388
    sget-object v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string v2, "privacy_top"

    invoke-static {v1, v2}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    .line 367
    :cond_d
    :goto_5
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyOffsetY()I

    move-result v7

    if-lez v7, :cond_e

    iget v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    iget-object v9, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    .line 368
    invoke-virtual {v9}, Landroid/widget/RelativeLayout;->getMeasuredHeight()I

    move-result v9

    sub-int/2addr v7, v9

    iget-object v9, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v10, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v10}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyOffsetY()I

    move-result v10

    int-to-float v10, v10

    invoke-static {v9, v10}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v9

    sub-int/2addr v7, v9

    if-lez v7, :cond_e

    .line 369
    sget-object v3, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "privacy_top = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    invoke-virtual {v8}, Landroid/widget/RelativeLayout;->getMeasuredHeight()I

    move-result v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v3, v7}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 370
    invoke-virtual {v0, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 371
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v1, v1

    invoke-static {v2, v1}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyOffsetY()I

    move-result v3

    int-to-float v3, v3

    invoke-static {v2, v3}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v2

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v4, v6

    .line 372
    invoke-static {v3, v4}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v3

    .line 371
    invoke-virtual {v0, v1, v2, v3, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_6

    .line 374
    :cond_e
    sget-object v2, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 375
    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 376
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v1, v1

    invoke-static {v2, v1}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v3, v6

    invoke-static {v2, v3}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v0, v1, v5, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 391
    :goto_6
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic f(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Landroid/os/Handler;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b:Landroid/os/Handler;

    return-object p0
.end method

.method private f()V
    .locals 7

    .line 397
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    .line 399
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/high16 v1, 0x4000000

    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    .line 401
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/high16 v2, 0x8000000

    invoke-virtual {v0, v2}, Landroid/view/Window;->addFlags(I)V

    .line 402
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getStatusBarColor()I

    move-result v0

    if-eqz v0, :cond_0

    .line 403
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/high16 v2, -0x80000000

    invoke-virtual {v0, v2}, Landroid/view/Window;->addFlags(I)V

    .line 404
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/Window;->clearFlags(I)V

    .line 405
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getStatusBarColor()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/Window;->setStatusBarColor(I)V

    .line 406
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getStatusBarColor()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/Window;->setNavigationBarColor(I)V

    .line 410
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    const/4 v2, 0x0

    if-lt v0, v1, :cond_2

    .line 411
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isLightColor()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 412
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x2000

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 414
    :cond_1
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 419
    :cond_2
    :goto_0
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 420
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 421
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getContentView()Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 423
    invoke-virtual {v1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 425
    check-cast v3, Landroid/view/ViewGroup;

    invoke-virtual {v3, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 427
    :cond_3
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    goto :goto_1

    .line 428
    :cond_4
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLayoutResID()I

    move-result v1

    if-eq v1, v3, :cond_5

    .line 429
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v1

    .line 430
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLayoutResID()I

    move-result v3

    invoke-virtual {v1, v3, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 433
    :cond_5
    :goto_1
    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->setContentView(Landroid/view/View;)V

    .line 434
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getRequestedOrientation()I

    move-result v1

    .line 435
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    invoke-static {v3}, Lcom/cmic/gen/sdk/view/e;->b(Landroid/content/Context;)I

    move-result v3

    iput v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    .line 436
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    invoke-static {v3}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;)I

    move-result v3

    iput v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->D:I

    const/4 v4, 0x1

    if-ne v1, v4, :cond_6

    .line 437
    iget v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    if-gt v3, v5, :cond_7

    :cond_6
    if-nez v1, :cond_8

    iget v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->D:I

    iget v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    if-ge v3, v5, :cond_8

    .line 439
    :cond_7
    iget v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->D:I

    .line 440
    iget v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    iput v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->D:I

    .line 441
    iput v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    .line 443
    :cond_8
    sget-object v3, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "orientation = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "--screenWidth = "

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->D:I

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "--screenHeight = "

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 445
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v1

    .line 446
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getWindowWidth()I

    move-result v3

    if-eqz v3, :cond_a

    .line 447
    new-instance v3, Landroid/util/DisplayMetrics;

    invoke-direct {v3}, Landroid/util/DisplayMetrics;-><init>()V

    .line 448
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v5

    invoke-virtual {v5}, Landroid/view/Window;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v5

    invoke-interface {v5}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v5

    invoke-virtual {v5, v3}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 449
    new-instance v3, Landroid/graphics/Point;

    invoke-direct {v3}, Landroid/graphics/Point;-><init>()V

    .line 450
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v5

    invoke-interface {v5}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v5

    invoke-virtual {v5, v3}, Landroid/view/Display;->getSize(Landroid/graphics/Point;)V

    .line 451
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getWindowWidth()I

    move-result v5

    int-to-float v5, v5

    invoke-static {v3, v5}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v3

    iput v3, v1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 452
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getWindowHeight()I

    move-result v5

    int-to-float v5, v5

    invoke-static {v3, v5}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v3

    iput v3, v1, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 453
    iget v3, v1, Landroid/view/WindowManager$LayoutParams;->width:I

    iput v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->D:I

    .line 454
    iget v3, v1, Landroid/view/WindowManager$LayoutParams;->height:I

    iput v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->C:I

    .line 455
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getWindowX()I

    move-result v5

    int-to-float v5, v5

    invoke-static {v3, v5}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v3

    iput v3, v1, Landroid/view/WindowManager$LayoutParams;->x:I

    .line 456
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getWindowBottom()I

    move-result v3

    if-ne v3, v4, :cond_9

    .line 457
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v3

    const/16 v5, 0x50

    invoke-virtual {v3, v5}, Landroid/view/Window;->setGravity(I)V

    goto :goto_2

    .line 459
    :cond_9
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v5}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getWindowY()I

    move-result v5

    int-to-float v5, v5

    invoke-static {v3, v5}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v3

    iput v3, v1, Landroid/view/WindowManager$LayoutParams;->y:I

    .line 461
    :goto_2
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getWindow()Landroid/view/Window;

    move-result-object v3

    invoke-virtual {v3, v1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 463
    :cond_a
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isFitsSystemWindows()Z

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setFitsSystemWindows(Z)V

    .line 464
    invoke-virtual {v0, v4}, Landroid/widget/RelativeLayout;->setClipToPadding(Z)V

    .line 466
    :try_start_0
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->g()V

    .line 467
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 468
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->h()Landroid/widget/RelativeLayout;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 469
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->i()Landroid/widget/RelativeLayout;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 470
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->e()V

    .line 472
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, p0}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 473
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->x:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, p0}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 474
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    new-instance v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$9;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$9;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 499
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 501
    :try_start_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isPrivacyState()Z

    move-result v0

    if-eqz v0, :cond_b

    .line 502
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {v0, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 503
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckedImgPath()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/cmic/gen/sdk/view/c;->b(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setBackgroundResource(I)V

    .line 504
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v4}, Landroid/widget/RelativeLayout;->setEnabled(Z)V

    .line 505
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u590d\u9009\u6846 \u5df2\u52fe\u9009 "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setContentDescription(Ljava/lang/CharSequence;)V

    goto :goto_4

    .line 508
    :cond_b
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 509
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenCheckBoxListener()Lcom/cmic/gen/sdk/view/GenCheckBoxListener;

    move-result-object v1

    if-nez v1, :cond_d

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckTipText()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_c

    goto :goto_3

    :cond_c
    const/4 v4, 0x0

    :cond_d
    :goto_3
    invoke-virtual {v0, v4}, Landroid/widget/RelativeLayout;->setEnabled(Z)V

    .line 510
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getUncheckedImgPath()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/cmic/gen/sdk/view/c;->b(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setBackgroundResource(I)V

    .line 511
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u590d\u9009\u6846 \u8bf7\u53cc\u51fb\u52fe\u9009 "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setContentDescription(Ljava/lang/CharSequence;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_4

    .line 514
    :catch_0
    :try_start_2
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_4

    :catch_1
    move-exception v0

    .line 517
    sget-object v1, Lcom/cmic/gen/sdk/d/c;->b:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 518
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 519
    sget-object v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 520
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const/4 v1, 0x0

    const-string v2, "200040"

    const-string v3, "UI\u8d44\u6e90\u52a0\u8f7d\u5f02\u5e38"

    invoke-direct {p0, v2, v3, v0, v1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    :goto_4
    return-void
.end method

.method static synthetic g(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    return-object p0
.end method

.method private g()V
    .locals 7

    .line 526
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    const/16 v1, 0x3333

    .line 527
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setId(I)V

    .line 528
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    const/4 v2, -0x2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 529
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 531
    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 532
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xf

    .line 533
    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setGravity(I)V

    .line 534
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v2}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumberOffsetX()I

    move-result v2

    const/4 v3, 0x0

    if-nez v2, :cond_0

    const/16 v2, 0xd

    .line 536
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    goto :goto_0

    :cond_0
    if-lez v2, :cond_2

    .line 538
    iget v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->D:I

    invoke-virtual {v0}, Landroid/widget/TextView;->getWidth()I

    move-result v5

    sub-int/2addr v4, v5

    iget-object v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    int-to-float v2, v2

    invoke-static {v5, v2}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v5

    sub-int/2addr v4, v5

    if-lez v4, :cond_1

    .line 539
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    invoke-static {v4, v2}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v1, v2, v3, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_0

    .line 541
    :cond_1
    sget-object v2, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string v4, "RelativeLayout.ALIGN_PARENT_RIGHT"

    invoke-static {v2, v4}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v2, 0xb

    .line 542
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    :cond_2
    :goto_0
    const/4 v2, 0x2

    .line 546
    :try_start_0
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumberSize()I

    move-result v4

    int-to-float v4, v4

    invoke-virtual {v0, v2, v4}, Landroid/widget/TextView;->setTextSize(IF)V

    .line 547
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->o:Ljava/lang/String;

    const-string v5, "****"

    const-string v6, "\u661f\u661f\u661f\u661f"

    invoke-virtual {v4, v5, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "(.{1})"

    const-string v6, "$1 "

    invoke-virtual {v4, v5, v6}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setContentDescription(Ljava/lang/CharSequence;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    const/high16 v4, 0x41900000    # 18.0f

    .line 549
    invoke-virtual {v0, v2, v4}, Landroid/widget/TextView;->setTextSize(IF)V

    .line 553
    :goto_1
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 555
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v2}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isNumberBold()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 556
    sget-object v2, Landroid/graphics/Typeface;->DEFAULT_BOLD:Landroid/graphics/Typeface;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTypeface(Landroid/graphics/Typeface;)V

    :cond_3
    const/16 v2, 0x7777

    .line 558
    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setId(I)V

    .line 559
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {v2, v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 563
    :try_start_1
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getNumberColor()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    const v1, -0xcccccd

    .line 565
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    .line 567
    :goto_2
    invoke-static {v3, v3}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v0

    .line 568
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0, v0}, Landroid/widget/RelativeLayout;->measure(II)V

    .line 569
    sget-object v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mPhoneLayout.getMeasuredHeight()="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {v2}, Landroid/widget/RelativeLayout;->getMeasuredHeight()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private h()Landroid/widget/RelativeLayout;
    .locals 4

    .line 574
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    const/16 v1, 0x4444

    .line 575
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setId(I)V

    .line 576
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v2}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnWidth()I

    move-result v2

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v1

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v3}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnHeight()I

    move-result v3

    int-to-float v3, v3

    invoke-static {v2, v3}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 580
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 581
    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 583
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnTextSize()I

    move-result v1

    int-to-float v1, v1

    const/4 v2, 0x2

    invoke-virtual {v0, v2, v1}, Landroid/widget/TextView;->setTextSize(IF)V

    .line 584
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 585
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 586
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 587
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isLogBtnTextBold()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 588
    sget-object v1, Landroid/graphics/Typeface;->DEFAULT_BOLD:Landroid/graphics/Typeface;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTypeface(Landroid/graphics/Typeface;)V

    .line 590
    :cond_0
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 591
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnText()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 593
    :try_start_0
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnTextColor()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v1, -0x1

    .line 595
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    .line 599
    :goto_0
    :try_start_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v2}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getLogBtnBackgroundPath()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/cmic/gen/sdk/view/c;->b(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundResource(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 601
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 602
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    const-string v2, "umcsdk_login_btn_bg"

    invoke-static {v1, v2}, Lcom/cmic/gen/sdk/view/c;->b(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundResource(I)V

    .line 604
    :goto_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    return-object v0
.end method

.method static synthetic h(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Landroid/widget/RelativeLayout;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    return-object p0
.end method

.method static synthetic i(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Landroid/widget/CheckBox;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    return-object p0
.end method

.method private i()Landroid/widget/RelativeLayout;
    .locals 12

    .line 610
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    const/4 v1, 0x1

    .line 612
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setHorizontalGravity(I)V

    .line 613
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    const/4 v3, -0x2

    invoke-direct {v0, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 615
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    invoke-virtual {v4, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 617
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckedImgWidth()I

    move-result v0

    .line 618
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckedImgHeight()I

    move-result v4

    .line 619
    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    const/16 v7, 0x1e

    invoke-static {v0, v7}, Ljava/lang/Math;->max(II)I

    move-result v8

    int-to-float v8, v8

    invoke-static {v6, v8}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v6

    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    invoke-static {v4, v7}, Ljava/lang/Math;->max(II)I

    move-result v4

    int-to-float v4, v4

    invoke-static {v8, v4}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v5, v6, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 620
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckBoxLocation()I

    move-result v4

    const/16 v6, 0xf

    if-ne v4, v1, :cond_0

    .line 621
    invoke-virtual {v5, v6, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 623
    :cond_0
    new-instance v4, Landroid/widget/RelativeLayout;

    invoke-direct {v4, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->x:Landroid/widget/RelativeLayout;

    const v8, 0x8888

    .line 625
    invoke-virtual {v4, v8}, Landroid/widget/RelativeLayout;->setId(I)V

    .line 626
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->x:Landroid/widget/RelativeLayout;

    invoke-virtual {v4, v5}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 628
    new-instance v4, Landroid/widget/CheckBox;

    invoke-direct {v4, p0}, Landroid/widget/CheckBox;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    const/4 v5, 0x0

    .line 629
    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 630
    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    iget-object v9, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v10, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v10}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckedImgWidth()I

    move-result v10

    int-to-float v10, v10

    invoke-static {v9, v10}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v9

    iget-object v10, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v11, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v11}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckedImgHeight()I

    move-result v11

    int-to-float v11, v11

    invoke-static {v10, v11}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v10

    invoke-direct {v4, v9, v10}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 631
    iget-object v9, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    if-le v0, v7, :cond_1

    const/4 v0, 0x0

    goto :goto_0

    :cond_1
    sub-int/2addr v7, v0

    int-to-float v0, v7

    :goto_0
    invoke-static {v9, v0}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v0

    invoke-virtual {v4, v0, v5, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    const/16 v0, 0xb

    .line 632
    invoke-virtual {v4, v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 633
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckBoxLocation()I

    move-result v0

    if-ne v0, v1, :cond_2

    .line 634
    invoke-virtual {v4, v6, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 636
    :cond_2
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {v0, v4}, Landroid/widget/CheckBox;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 637
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->x:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 639
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->x:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 641
    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x2

    .line 650
    iget-object v4, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v4}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyTextSize()I

    move-result v4

    int-to-float v4, v4

    invoke-virtual {v0, v2, v4}, Landroid/widget/TextView;->setTextSize(IF)V

    .line 651
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v2, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 652
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    const/high16 v4, 0x40a00000    # 5.0f

    invoke-static {v3, v4}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v3

    iget-object v6, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    invoke-static {v6, v4}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;F)I

    move-result v4

    invoke-virtual {v2, v3, v5, v5, v4}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 653
    invoke-virtual {v2, v1, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 654
    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 655
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 656
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseBaseColor()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    .line 657
    iget-object v7, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    iget-object v8, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->y:Ljava/lang/String;

    iget-object v9, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->e:Lcom/cmic/gen/sdk/view/d;

    iget-object v10, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->j:Ljava/util/ArrayList;

    iget-object v11, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k:Ljava/util/ArrayList;

    move-object v6, p0

    invoke-static/range {v6 .. v11}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/view/d;Ljava/util/ArrayList;Ljava/util/ArrayList;)Landroid/text/SpannableString;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v1, 0x41000000    # 8.0f

    const/high16 v2, 0x3f800000    # 1.0f

    .line 659
    invoke-virtual {v0, v1, v2}, Landroid/widget/TextView;->setLineSpacing(FF)V

    .line 660
    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setIncludeFontPadding(Z)V

    .line 661
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isPrivacyTextBold()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 662
    sget-object v1, Landroid/graphics/Typeface;->DEFAULT_BOLD:Landroid/graphics/Typeface;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTypeface(Landroid/graphics/Typeface;)V

    .line 664
    :cond_3
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isPrivacyTextGravityCenter()Z

    move-result v1

    if-eqz v1, :cond_4

    const/16 v1, 0x11

    .line 665
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setGravity(I)V

    .line 667
    :cond_4
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x106000d

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getColor(I)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setHighlightColor(I)V

    .line 668
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    new-instance v2, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$10;

    invoke-direct {v2, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$10;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 674
    new-instance v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$11;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$11;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setMovementMethod(Landroid/text/method/MovementMethod;)V

    .line 689
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    new-instance v1, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/ColorDrawable;-><init>()V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setButtonDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 691
    :try_start_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getUncheckedImgPath()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/cmic/gen/sdk/view/c;->b(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setBackgroundResource(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 693
    :catch_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    const-string v1, "umcsdk_uncheck_image"

    invoke-static {p0, v1}, Lcom/cmic/gen/sdk/view/c;->b(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setBackgroundResource(I)V

    .line 695
    :goto_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    return-object v0
.end method

.method private j()Ljava/lang/String;
    .locals 3

    .line 699
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacy()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    .line 700
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isPrivacyBookSymbol()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    .line 701
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->y:Ljava/lang/String;

    aput-object v2, v0, v1

    const-string v1, "\u300a%s\u300b"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->y:Ljava/lang/String;

    .line 703
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    const-string v1, "$$\u8fd0\u8425\u5546\u6761\u6b3e$$"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 704
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->y:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    .line 706
    :cond_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic j(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->z:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic k(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->u:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;

    return-object p0
.end method

.method private k()V
    .locals 2

    .line 713
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setClickable(Z)V

    .line 714
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setClickable(Z)V

    return-void
.end method

.method private l()V
    .locals 2

    .line 721
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setClickable(Z)V

    .line 722
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setClickable(Z)V

    return-void
.end method

.method static synthetic l(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V
    .locals 0

    .line 69
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m()V

    return-void
.end method

.method private m()V
    .locals 8

    const-string v0, "traceId"

    .line 827
    :try_start_0
    iget v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->t:I

    const/4 v2, 0x5

    if-lt v1, v2, :cond_0

    .line 828
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    const-string v1, "\u7f51\u7edc\u4e0d\u7a33\u5b9a,\u8bf7\u8fd4\u56de\u91cd\u8bd5\u5176\u4ed6\u767b\u5f55\u65b9\u5f0f"

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 829
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->setClickable(Z)V

    return-void

    .line 832
    :cond_0
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v1

    .line 833
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    .line 835
    array-length v3, v1

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v3, :cond_2

    aget-object v5, v1, v4

    const-string v6, "stack"

    .line 836
    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 837
    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v5

    .line 838
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_1

    const-string v6, "com.cmic.gen.sdk.activity"

    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 839
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_1

    .line 840
    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ";"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 843
    :cond_2
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const-string v2, "loginTime"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v1, v2, v3, v4}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;J)V

    .line 844
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const-string v2, ""

    invoke-virtual {v1, v0, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 845
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 846
    invoke-static {v1}, Lcom/cmic/gen/sdk/e/e;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 847
    invoke-static {}, Lcom/cmic/gen/sdk/e/q;->c()Ljava/lang/String;

    move-result-object v1

    .line 848
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v2, v0, v1}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 849
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->v:Lcom/cmic/gen/sdk/auth/GenTokenListener;

    invoke-static {v1, v0}, Lcom/cmic/gen/sdk/e/e;->a(Ljava/lang/String;Lcom/cmic/gen/sdk/auth/GenTokenListener;)V

    .line 852
    :cond_3
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b()V

    .line 853
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->l()V

    .line 854
    new-instance v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    invoke-direct {v0, p0, v1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;Lcom/cmic/gen/sdk/a;)V

    .line 856
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b:Landroid/os/Handler;

    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v2

    invoke-virtual {v2}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getOverTime()J

    move-result-wide v2

    invoke-virtual {v1, v0, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 857
    new-instance v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$b;

    invoke-direct {v1, p0, v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$b;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$c;)V

    invoke-static {v1}, Lcom/cmic/gen/sdk/e/n;->a(Lcom/cmic/gen/sdk/e/n$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 859
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method static synthetic m(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V
    .locals 0

    .line 69
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->k()V

    return-void
.end method

.method static synthetic n(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/a;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    return-object p0
.end method

.method static synthetic o(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/auth/a;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->n:Lcom/cmic/gen/sdk/auth/a;

    return-object p0
.end method


# virtual methods
.method public a()V
    .locals 2

    .line 913
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 914
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->e:Lcom/cmic/gen/sdk/view/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/d;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 915
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->e:Lcom/cmic/gen/sdk/view/d;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/d;->dismiss()V

    .line 917
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->f:Lcom/cmic/gen/sdk/view/d;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/d;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 918
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->f:Lcom/cmic/gen/sdk/view/d;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/d;->dismiss()V

    .line 920
    :cond_1
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c()V

    .line 921
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    if-eqz v1, :cond_2

    .line 922
    invoke-virtual {v1}, Landroid/app/Dialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 923
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    .line 925
    :cond_2
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_3

    .line 926
    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->clearAnimation()V

    .line 928
    :cond_3
    invoke-static {}, Lcom/cmic/gen/sdk/view/b;->a()Lcom/cmic/gen/sdk/view/b;

    move-result-object v0

    const/4 v1, 0x0

    iput v1, v0, Lcom/cmic/gen/sdk/view/b;->a:I

    .line 929
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->finish()V

    .line 930
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getAuthPageActOut()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getActivityIn()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 931
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getActivityIn()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/cmic/gen/sdk/view/c;->c(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getAuthPageActOut()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/cmic/gen/sdk/view/c;->c(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v0, v1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->overridePendingTransition(II)V

    :cond_4
    return-void
.end method

.method public b()V
    .locals 6

    .line 1027
    sget-object v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string v1, "loginClickStart"

    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 1029
    :try_start_0
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->E:Z

    .line 1030
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenLoginClickListener()Lcom/cmic/gen/sdk/view/GenLoginClickListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1031
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenLoginClickListener()Lcom/cmic/gen/sdk/view/GenLoginClickListener;

    move-result-object v0

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    const/4 v3, 0x0

    invoke-interface {v0, v2, v3}, Lcom/cmic/gen/sdk/view/GenLoginClickListener;->onLoginClickStart(Landroid/content/Context;Lorg/json/JSONObject;)V

    goto/16 :goto_0

    .line 1033
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    if-eqz v0, :cond_1

    .line 1034
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    return-void

    .line 1037
    :cond_1
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    const/4 v2, 0x0

    .line 1038
    invoke-virtual {v0, v2}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 1039
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v0, v2}, Landroid/app/Dialog;->setCanceledOnTouchOutside(Z)V

    .line 1040
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    new-instance v2, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$3;

    invoke-direct {v2, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$3;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-virtual {v0, v2}, Landroid/app/Dialog;->setOnKeyListener(Landroid/content/DialogInterface$OnKeyListener;)V

    .line 1046
    new-instance v0, Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v2}, Landroid/app/Dialog;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 1047
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x2

    const/4 v4, -0x1

    invoke-direct {v2, v4, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1048
    new-instance v2, Landroid/widget/ImageView;

    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v3}, Landroid/app/Dialog;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 1049
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    const-string v5, "umcsdk_dialog_loading"

    invoke-static {v3, v5}, Lcom/cmic/gen/sdk/view/c;->b(Landroid/content/Context;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 1050
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v5, 0x50

    invoke-direct {v3, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v5, 0xd

    .line 1051
    invoke-virtual {v3, v5, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 1052
    invoke-virtual {v0, v2, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1053
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v2}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 1054
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v2}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/view/Window;->setDimAmount(F)V

    .line 1056
    :cond_2
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v2, v0}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1059
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 1061
    :goto_0
    sget-object v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public c()V
    .locals 3

    .line 1066
    :try_start_0
    sget-object v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string v1, "loginClickComplete"

    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1067
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenLoginClickListener()Lcom/cmic/gen/sdk/view/GenLoginClickListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->E:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 1068
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->E:Z

    .line 1069
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenLoginClickListener()Lcom/cmic/gen/sdk/view/GenLoginClickListener;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/cmic/gen/sdk/view/GenLoginClickListener;->onLoginClickComplete(Landroid/content/Context;Lorg/json/JSONObject;)V

    goto :goto_0

    .line 1070
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1071
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1074
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 3

    .line 940
    :try_start_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result p1

    const/16 v0, 0x4444

    const/4 v1, 0x1

    if-eq p1, v0, :cond_3

    const/16 v0, 0x6666

    const/4 v2, 0x0

    if-eq p1, v0, :cond_2

    const v0, 0x8888

    if-eq p1, v0, :cond_0

    goto/16 :goto_0

    .line 977
    :cond_0
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 978
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {p1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto/16 :goto_0

    .line 980
    :cond_1
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {p1, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto/16 :goto_0

    .line 984
    :cond_2
    invoke-direct {p0, v2}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Z)V

    goto/16 :goto_0

    .line 943
    :cond_3
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    if-nez p1, :cond_7

    .line 944
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenAuthLoginListener()Lcom/cmic/gen/sdk/view/GenAuthLoginListener;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 945
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenAuthLoginListener()Lcom/cmic/gen/sdk/view/GenAuthLoginListener;

    move-result-object p1

    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    new-instance v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$2;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$2;-><init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    invoke-interface {p1, v0, v1}, Lcom/cmic/gen/sdk/view/GenAuthLoginListener;->onAuthLoginListener(Landroid/content/Context;Lcom/cmic/gen/sdk/view/AuthLoginCallBack;)V

    return-void

    .line 958
    :cond_4
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyAnimation()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 959
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v2}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getPrivacyAnimation()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/cmic/gen/sdk/view/c;->c(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-static {p1, v0}, Landroid/view/animation/AnimationUtils;->loadAnimation(Landroid/content/Context;I)Landroid/view/animation/Animation;

    move-result-object p1

    .line 960
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->q:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, p1}, Landroid/widget/RelativeLayout;->startAnimation(Landroid/view/animation/Animation;)V

    .line 962
    :cond_5
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenCheckBoxListener()Lcom/cmic/gen/sdk/view/GenCheckBoxListener;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 963
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenCheckBoxListener()Lcom/cmic/gen/sdk/view/GenCheckBoxListener;

    move-result-object p1

    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-interface {p1, v0, v1}, Lcom/cmic/gen/sdk/view/GenCheckBoxListener;->onLoginClick(Landroid/content/Context;Lorg/json/JSONObject;)V

    return-void

    .line 966
    :cond_6
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckTipText()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_7

    .line 967
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getCheckTipText()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    return-void

    .line 972
    :cond_7
    iget p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->t:I

    add-int/2addr p1, v1

    iput p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->t:I

    .line 973
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 990
    sget-object v0, Lcom/cmic/gen/sdk/d/c;->b:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 991
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3

    .line 104
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    if-eqz p1, :cond_0

    .line 107
    :try_start_0
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->finish()V

    .line 109
    :cond_0
    iput-object p0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    .line 110
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object p1

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getAuthThemeConfig()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    move-result-object p1

    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    if-eqz p1, :cond_2

    .line 112
    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getThemeId()I

    move-result p1

    const/4 v0, -0x1

    if-eq p1, v0, :cond_1

    .line 113
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getThemeId()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->setTheme(I)V

    .line 115
    :cond_1
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getAuthPageActIn()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getActivityOut()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 116
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getAuthPageActIn()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/cmic/gen/sdk/view/c;->c(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getActivityOut()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/cmic/gen/sdk/view/c;->c(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, p1, v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->overridePendingTransition(II)V

    :cond_2
    const-string p1, "authPageIn"

    .line 119
    invoke-static {p1}, Lcom/cmic/gen/sdk/d/a;->a(Ljava/lang/String;)V

    .line 120
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->s:J

    .line 121
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/a;->a(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/a;

    move-result-object p1

    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->n:Lcom/cmic/gen/sdk/auth/a;

    .line 122
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d()V

    .line 123
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->f()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 125
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    if-nez v0, :cond_3

    .line 126
    new-instance v0, Lcom/cmic/gen/sdk/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/cmic/gen/sdk/a;-><init>(I)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    .line 128
    :cond_3
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/a;->a()Lcom/cmic/gen/sdk/d/b;

    move-result-object v0

    iget-object v0, v0, Lcom/cmic/gen/sdk/d/b;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 129
    sget-object v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 130
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 131
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const/4 v0, 0x0

    const-string v1, "200025"

    const-string v2, "\u53d1\u751f\u672a\u77e5\u9519\u8bef"

    invoke-direct {p0, v1, v2, p1, v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    :goto_0
    return-void
.end method

.method protected onDestroy()V
    .locals 7

    .line 762
    :try_start_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    const-string v0, "timeOnAuthPage"

    .line 763
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v5, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->s:J

    sub-long/2addr v3, v5

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/cmic/gen/sdk/d/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 764
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->p:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "authPrivacyState"

    if-eqz v0, :cond_0

    :try_start_1
    const-string v0, "1"

    .line 765
    invoke-static {v2, v0}, Lcom/cmic/gen/sdk/d/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "0"

    .line 767
    invoke-static {v2, v0}, Lcom/cmic/gen/sdk/d/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 769
    :goto_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    invoke-static {v0, v2}, Lcom/cmic/gen/sdk/d/a;->a(Landroid/content/Context;Lcom/cmic/gen/sdk/a;)V

    .line 770
    invoke-static {}, Lcom/cmic/gen/sdk/d/a;->a()V

    .line 771
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->F:Landroid/app/Dialog;

    .line 772
    invoke-static {}, Lcom/cmic/gen/sdk/view/b;->a()Lcom/cmic/gen/sdk/view/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/b;->c()V

    .line 773
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->u:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;->removeCallbacksAndMessages(Ljava/lang/Object;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 775
    sget-object v1, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a:Ljava/lang/String;

    const-string v2, "GenLoginAuthActivity clear failed"

    invoke-static {v1, v2}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 776
    sget-object v1, Lcom/cmic/gen/sdk/d/c;->b:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 777
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 779
    :goto_1
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method public onKeyUp(ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 v0, 0x4

    if-ne p1, v0, :cond_2

    .line 744
    invoke-virtual {p2}, Landroid/view/KeyEvent;->isCanceled()Z

    move-result p1

    if-nez p1, :cond_2

    invoke-virtual {p2}, Landroid/view/KeyEvent;->getRepeatCount()I

    move-result p1

    if-nez p1, :cond_2

    .line 746
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenBackPressedListener()Lcom/cmic/gen/sdk/view/GenBackPressedListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 747
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getGenBackPressedListener()Lcom/cmic/gen/sdk/view/GenBackPressedListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/cmic/gen/sdk/view/GenBackPressedListener;->onBackPressed()V

    .line 749
    :cond_0
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getWindowWidth()I

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->B:Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isBackButton()Z

    move-result p1

    if-eqz p1, :cond_2

    :cond_1
    const/4 p1, 0x0

    .line 750
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Z)V

    :cond_2
    const/4 p1, 0x1

    return p1
.end method

.method protected onResume()V
    .locals 4

    .line 137
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    const/4 v0, 0x0

    .line 139
    :try_start_0
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    if-eqz v1, :cond_0

    .line 140
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const-string v2, "loginMethod"

    const-string v3, "loginAuth"

    invoke-virtual {v1, v2, v3}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 142
    :cond_0
    invoke-static {p0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v1

    const-string v2, "200087"

    invoke-virtual {v1, v2, v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->loginPageInCallBack(Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 144
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 145
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v2}, Lcom/cmic/gen/sdk/a;->a()Lcom/cmic/gen/sdk/d/b;

    move-result-object v2

    iget-object v2, v2, Lcom/cmic/gen/sdk/d/b;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 146
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m:Lcom/cmic/gen/sdk/a;

    const-string v2, "200025"

    const-string v3, "\u53d1\u751f\u672a\u77e5\u9519\u8bef"

    invoke-direct {p0, v2, v3, v1, v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    :goto_0
    return-void
.end method
