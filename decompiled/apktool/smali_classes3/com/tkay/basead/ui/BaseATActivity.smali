.class public Lcom/tkay/basead/ui/BaseATActivity;
.super Landroid/app/Activity;


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field b:Z

.field c:Lcom/tkay/core/common/f/x;

.field d:J

.field e:J

.field f:F

.field g:Z

.field h:Lcom/tkay/core/common/b$a;

.field private i:Lcom/tkay/basead/ui/BaseScreenATView;

.field private j:Lcom/tkay/core/common/f/i;

.field private k:Lcom/tkay/core/common/f/h;

.field private l:Ljava/lang/String;

.field private m:Lcom/tkay/basead/e/b$b;

.field private n:Ljava/lang/String;

.field private o:I

.field private p:I

.field private q:Z

.field private r:Z

.field private s:Z

.field private t:Z

.field private u:Z

.field private v:Lcom/tkay/core/api/BaseAd;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 41
    const-class v0, Lcom/tkay/basead/ui/BaseATActivity;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/BaseATActivity;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 39
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const-wide/16 v0, 0x0

    .line 66
    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->d:J

    .line 67
    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->e:J

    const/4 v0, 0x0

    .line 68
    iput v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->f:F

    const/4 v0, 0x0

    .line 69
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->g:Z

    .line 73
    new-instance v0, Lcom/tkay/basead/ui/BaseATActivity$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/BaseATActivity$1;-><init>(Lcom/tkay/basead/ui/BaseATActivity;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->h:Lcom/tkay/core/common/b$a;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/BaseATActivity;)Lcom/tkay/core/common/f/h;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    return-object p0
.end method

.method private a()V
    .locals 3

    .line 147
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    const-string v1, "extra_scenario"

    .line 150
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    const-string v1, "extra_ad_format"

    const/4 v2, 0x1

    .line 151
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    const-string v1, "extra_offer_ad"

    .line 152
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/h;

    iput-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    const-string v1, "extra_request_info"

    .line 153
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/i;

    iput-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    const-string v1, "extra_event_id"

    .line 154
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->l:Ljava/lang/String;

    .line 156
    iget v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    invoke-static {v0, v1}, Lcom/tkay/basead/ui/BaseATActivity;->a(ILcom/tkay/core/common/f/i;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->u:Z

    return-void

    :cond_0
    const-string v0, "tkay"

    .line 159
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/tkay/basead/ui/BaseATActivity;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " Intent is null."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 162
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public static a(Landroid/app/Activity;Lcom/tkay/core/basead/b/a;)V
    .locals 4

    .line 97
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 99
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    if-eqz p0, :cond_0

    .line 100
    invoke-virtual {p0}, Landroid/app/Activity;->isFinishing()Z

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    :cond_0
    const-string p0, "tkay_BaseATActivity"

    const-string v2, "Activity is null"

    .line 103
    invoke-static {p0, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    move-object p0, v1

    .line 106
    :goto_0
    iget v1, p1, Lcom/tkay/core/basead/b/a;->a:I

    iget-object v2, p1, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    invoke-static {v1, v2}, Lcom/tkay/basead/ui/BaseATActivity;->a(ILcom/tkay/core/common/f/i;)Z

    move-result v1

    .line 107
    iget v2, p1, Lcom/tkay/core/basead/b/a;->e:I

    const/4 v3, 0x2

    if-ne v2, v3, :cond_2

    if-eqz v1, :cond_1

    .line 110
    const-class v1, Lcom/tkay/basead/ui/ATLandscapeTranslucentActivity;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    .line 112
    :cond_1
    const-class v1, Lcom/tkay/basead/ui/ATLandscapeActivity;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    :cond_2
    if-eqz v1, :cond_3

    .line 118
    const-class v1, Lcom/tkay/basead/ui/ATPortraitTranslucentActivity;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_1

    .line 120
    :cond_3
    const-class v1, Lcom/tkay/basead/ui/ATPortraitActivity;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 125
    :goto_1
    iget-object v1, p1, Lcom/tkay/core/basead/b/a;->b:Ljava/lang/String;

    const-string v2, "extra_scenario"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 126
    iget v1, p1, Lcom/tkay/core/basead/b/a;->a:I

    const-string v2, "extra_ad_format"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 127
    iget-object v1, p1, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    const-string v2, "extra_offer_ad"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 128
    iget-object v1, p1, Lcom/tkay/core/basead/b/a;->d:Ljava/lang/String;

    const-string v2, "extra_event_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 129
    iget-object v1, p1, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    const-string v2, "extra_request_info"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 131
    instance-of v1, p0, Landroid/app/Activity;

    if-nez v1, :cond_4

    const/high16 v1, 0x10000000

    .line 132
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 136
    :cond_4
    :try_start_0
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 138
    invoke-static {}, Lcom/tkay/basead/e/b;->a()Lcom/tkay/basead/e/b;

    move-result-object v0

    iget-object p1, p1, Lcom/tkay/core/basead/b/a;->d:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/e/b;->a(Ljava/lang/String;)Lcom/tkay/basead/e/b$b;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 140
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "10000"

    invoke-static {v0, p0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p0

    invoke-interface {p1, p0}, Lcom/tkay/basead/e/b$b;->a(Lcom/tkay/basead/c/e;)V

    :cond_5
    return-void
.end method

.method private a(Landroid/os/Bundle;)V
    .locals 2

    if-eqz p1, :cond_0

    const-string v0, "extra_is_show_end_card"

    .line 276
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->q:Z

    const-string v0, "extra_show_feedback_button"

    .line 277
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->r:Z

    const-string v0, "extra_is_mute"

    .line 278
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->s:Z

    const-string v0, "extra_has_reward_savestate"

    .line 279
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->t:Z

    const-string v0, "extra_show_banner_time"

    .line 281
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->d:J

    const-string v0, "extra_hide_banner_time"

    .line 282
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->e:J

    const-string v0, "extra_close_view_scale"

    .line 284
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getFloat(Ljava/lang/String;)F

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->f:F

    const-string v0, "extra_has_perform_click"

    .line 285
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseATActivity;->g:Z

    :cond_0
    return-void
.end method

.method private static a(ILcom/tkay/core/common/f/i;)Z
    .locals 1

    if-eqz p1, :cond_0

    .line 167
    iget-object v0, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-eqz v0, :cond_0

    const/4 v0, 0x3

    if-ne p0, v0, :cond_0

    .line 169
    iget-object p0, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p0}, Lcom/tkay/core/common/f/j;->E()Ljava/lang/String;

    move-result-object p0

    const-string p1, "2"

    invoke-static {p1, p0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p0

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic b(Lcom/tkay/basead/ui/BaseATActivity;)Lcom/tkay/basead/e/b$b;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    return-object p0
.end method

.method private b()Lcom/tkay/basead/ui/BaseScreenATView;
    .locals 15

    .line 181
    iget v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    .line 195
    new-instance v0, Lcom/tkay/basead/ui/FullScreenATView;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    iget-object v6, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    iget v7, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget v8, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    move-object v2, v0

    move-object v3, p0

    invoke-direct/range {v2 .. v8}, Lcom/tkay/basead/ui/FullScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V

    return-object v0

    .line 184
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->v:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_1

    .line 185
    new-instance v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget v7, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    iget-object v8, p0, Lcom/tkay/basead/ui/BaseATActivity;->v:Lcom/tkay/core/api/BaseAd;

    move-object v1, v0

    move-object v2, p0

    invoke-direct/range {v1 .. v8}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;IILcom/tkay/core/api/BaseAd;)V

    return-object v0

    .line 187
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->u:Z

    if-eqz v0, :cond_2

    .line 188
    new-instance v0, Lcom/tkay/basead/ui/HalfScreenATView;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget v7, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    move-object v1, v0

    move-object v2, p0

    invoke-direct/range {v1 .. v7}, Lcom/tkay/basead/ui/HalfScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V

    return-object v0

    .line 190
    :cond_2
    new-instance v0, Lcom/tkay/basead/ui/FullScreenATView;

    iget-object v10, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    iget-object v11, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    iget-object v12, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    iget v13, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget v14, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    move-object v8, v0

    move-object v9, p0

    invoke-direct/range {v8 .. v14}, Lcom/tkay/basead/ui/FullScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V

    return-object v0
.end method

.method private b(Landroid/os/Bundle;)V
    .locals 2

    .line 291
    new-instance v0, Lcom/tkay/basead/ui/BaseATActivity$2;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/BaseATActivity$2;-><init>(Lcom/tkay/basead/ui/BaseATActivity;)V

    .line 355
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v1, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->setListener(Lcom/tkay/basead/e/b$b;)V

    if-eqz p1, :cond_0

    const-string v0, "extra_is_show_end_card"

    .line 3276
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->q:Z

    const-string v0, "extra_show_feedback_button"

    .line 3277
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->r:Z

    const-string v0, "extra_is_mute"

    .line 3278
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->s:Z

    const-string v0, "extra_has_reward_savestate"

    .line 3279
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->t:Z

    const-string v0, "extra_show_banner_time"

    .line 3281
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->d:J

    const-string v0, "extra_hide_banner_time"

    .line 3282
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->e:J

    const-string v0, "extra_close_view_scale"

    .line 3284
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getFloat(Ljava/lang/String;)F

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->f:F

    const-string v0, "extra_has_perform_click"

    .line 3285
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->g:Z

    .line 360
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->q:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setIsShowEndCard(Z)V

    .line 361
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->r:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setHideFeedbackButton(Z)V

    .line 362
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->t:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setHasReward(Z)V

    if-eqz p1, :cond_1

    .line 365
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->s:Z

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->setVideoMute(Z)V

    .line 366
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->d:J

    invoke-virtual {p1, v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setShowBannerTime(J)V

    .line 367
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->e:J

    invoke-virtual {p1, v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setHideBannerTime(J)V

    .line 369
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->f:F

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->setCloseButtonScaleFactor(F)V

    .line 370
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->g:Z

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->setHasPerformClick(Z)V

    .line 374
    :cond_1
    :try_start_0
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/BaseScreenATView;->init()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 376
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 378
    :try_start_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_2

    .line 379
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    const-string v1, "40002"

    invoke-virtual {p1}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/l/h;->a([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/b$b;->a(Lcom/tkay/basead/c/e;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception p1

    .line 382
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 384
    :cond_2
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATActivity;->finish()V

    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/BaseATActivity;)Z
    .locals 0

    .line 39
    iget-boolean p0, p0, Lcom/tkay/basead/ui/BaseATActivity;->u:Z

    return p0
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 10

    .line 202
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 205
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    .line 206
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;)V

    .line 209
    :cond_0
    instance-of v0, p0, Lcom/tkay/basead/ui/ATLandscapeActivity;

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    const/4 v0, 0x2

    .line 210
    iput v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    goto :goto_0

    .line 212
    :cond_1
    iput v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    .line 1147
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v2, "tkay"

    if-eqz v0, :cond_2

    :try_start_0
    const-string v3, "extra_scenario"

    .line 1150
    invoke-virtual {v0, v3}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    const-string v3, "extra_ad_format"

    .line 1151
    invoke-virtual {v0, v3, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    const-string v1, "extra_offer_ad"

    .line 1152
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/h;

    iput-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    const-string v1, "extra_request_info"

    .line 1153
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/i;

    iput-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    const-string v1, "extra_event_id"

    .line 1154
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->l:Ljava/lang/String;

    .line 1156
    iget v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    invoke-static {v0, v1}, Lcom/tkay/basead/ui/BaseATActivity;->a(ILcom/tkay/core/common/f/i;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->u:Z

    goto :goto_2

    :catch_0
    move-exception v0

    goto :goto_1

    .line 1159
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/tkay/basead/ui/BaseATActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " Intent is null."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    .line 1162
    :goto_1
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 215
    :goto_2
    invoke-static {}, Lcom/tkay/basead/e/b;->a()Lcom/tkay/basead/e/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->l:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/e/b;->a(Ljava/lang/String;)Lcom/tkay/basead/e/b$b;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    .line 216
    invoke-static {}, Lcom/tkay/basead/d/i;->a()Lcom/tkay/basead/d/i;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->l:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/d/i;->a(Ljava/lang/String;)Lcom/tkay/core/api/BaseAd;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->v:Lcom/tkay/core/api/BaseAd;

    .line 233
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    const-string v9, "40002"

    if-eqz v0, :cond_d

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-nez v0, :cond_3

    goto/16 :goto_7

    .line 246
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    if-nez v0, :cond_5

    .line 247
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/tkay/basead/ui/BaseATActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " onCreate: OfferAd = null"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 249
    :try_start_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_4

    .line 250
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/tkay/basead/ui/BaseATActivity;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/basead/e/b$b;->a(Lcom/tkay/basead/c/e;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v0

    .line 253
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 255
    :cond_4
    :goto_3
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATActivity;->finish()V

    return-void

    .line 259
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/b;->a()Lcom/tkay/core/common/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->h:Lcom/tkay/core/common/b$a;

    const-string v2, "1"

    invoke-virtual {v0, v2, v1}, Lcom/tkay/core/common/b;->a(Ljava/lang/String;Lcom/tkay/core/common/b$a;)V

    .line 1181
    iget v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    const/4 v1, 0x3

    if-eq v0, v1, :cond_6

    .line 1195
    new-instance v0, Lcom/tkay/basead/ui/FullScreenATView;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget v7, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    move-object v1, v0

    move-object v2, p0

    invoke-direct/range {v1 .. v7}, Lcom/tkay/basead/ui/FullScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V

    goto :goto_4

    .line 1184
    :cond_6
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->v:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_7

    .line 1185
    new-instance v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget v7, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    iget-object v8, p0, Lcom/tkay/basead/ui/BaseATActivity;->v:Lcom/tkay/core/api/BaseAd;

    move-object v1, v0

    move-object v2, p0

    invoke-direct/range {v1 .. v8}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;IILcom/tkay/core/api/BaseAd;)V

    goto :goto_4

    .line 1187
    :cond_7
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->u:Z

    if-eqz v0, :cond_8

    .line 1188
    new-instance v0, Lcom/tkay/basead/ui/HalfScreenATView;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget v7, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    move-object v1, v0

    move-object v2, p0

    invoke-direct/range {v1 .. v7}, Lcom/tkay/basead/ui/HalfScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V

    goto :goto_4

    .line 1190
    :cond_8
    new-instance v0, Lcom/tkay/basead/ui/FullScreenATView;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATActivity;->j:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseATActivity;->n:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/basead/ui/BaseATActivity;->o:I

    iget v7, p0, Lcom/tkay/basead/ui/BaseATActivity;->p:I

    move-object v1, v0

    move-object v2, p0

    invoke-direct/range {v1 .. v7}, Lcom/tkay/basead/ui/FullScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V

    .line 261
    :goto_4
    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    .line 262
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->v:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_9

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getCustomAdContainer()Landroid/view/ViewGroup;

    move-result-object v0

    if-eqz v0, :cond_9

    .line 263
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->v:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v0}, Lcom/tkay/core/api/BaseAd;->getCustomAdContainer()Landroid/view/ViewGroup;

    move-result-object v0

    .line 264
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    .line 265
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseATActivity;->setContentView(Landroid/view/View;)V

    goto :goto_5

    .line 267
    :cond_9
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseATActivity;->setContentView(Landroid/view/View;)V

    .line 1291
    :goto_5
    new-instance v0, Lcom/tkay/basead/ui/BaseATActivity$2;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/BaseATActivity$2;-><init>(Lcom/tkay/basead/ui/BaseATActivity;)V

    .line 1355
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v1, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->setListener(Lcom/tkay/basead/e/b$b;)V

    if-eqz p1, :cond_a

    const-string v0, "extra_is_show_end_card"

    .line 2276
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->q:Z

    const-string v0, "extra_show_feedback_button"

    .line 2277
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->r:Z

    const-string v0, "extra_is_mute"

    .line 2278
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->s:Z

    const-string v0, "extra_has_reward_savestate"

    .line 2279
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->t:Z

    const-string v0, "extra_show_banner_time"

    .line 2281
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->d:J

    const-string v0, "extra_hide_banner_time"

    .line 2282
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->e:J

    const-string v0, "extra_close_view_scale"

    .line 2284
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getFloat(Ljava/lang/String;)F

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->f:F

    const-string v0, "extra_has_perform_click"

    .line 2285
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->g:Z

    .line 1360
    :cond_a
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->q:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setIsShowEndCard(Z)V

    .line 1361
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->r:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setHideFeedbackButton(Z)V

    .line 1362
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->t:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setHasReward(Z)V

    if-eqz p1, :cond_b

    .line 1365
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->s:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setVideoMute(Z)V

    .line 1366
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-wide v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->d:J

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/ui/BaseScreenATView;->setShowBannerTime(J)V

    .line 1367
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-wide v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->e:J

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/ui/BaseScreenATView;->setHideBannerTime(J)V

    .line 1369
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->f:F

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setCloseButtonScaleFactor(F)V

    .line 1370
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->g:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->setHasPerformClick(Z)V

    .line 1374
    :cond_b
    :try_start_2
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->init()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    .line 1376
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1378
    :try_start_3
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    if-eqz v1, :cond_c

    .line 1379
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/h;->a([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {v1, v0}, Lcom/tkay/basead/e/b$b;->a(Lcom/tkay/basead/c/e;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_6

    :catchall_2
    move-exception v0

    .line 1382
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1384
    :cond_c
    :goto_6
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATActivity;->finish()V

    return-void

    .line 234
    :cond_d
    :goto_7
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/tkay/basead/ui/BaseATActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "Start Screen Ad Error."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 236
    :try_start_4
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_e

    .line 237
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->m:Lcom/tkay/basead/e/b$b;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/tkay/basead/ui/BaseATActivity;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "Start FullScreen Ad Error."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/basead/e/b$b;->a(Lcom/tkay/basead/c/e;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    goto :goto_8

    :catchall_3
    move-exception v0

    .line 240
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 242
    :cond_e
    :goto_8
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATActivity;->finish()V

    return-void
.end method

.method protected onDestroy()V
    .locals 3

    const/4 v0, 0x0

    .line 454
    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->c:Lcom/tkay/core/common/f/x;

    .line 455
    invoke-static {}, Lcom/tkay/core/common/b;->a()Lcom/tkay/core/common/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity;->h:Lcom/tkay/core/common/b$a;

    const-string v2, "1"

    invoke-virtual {v0, v2, v1}, Lcom/tkay/core/common/b;->b(Ljava/lang/String;Lcom/tkay/core/common/b$a;)V

    .line 456
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    if-eqz v0, :cond_0

    .line 457
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->t()V

    .line 460
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->E()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->k:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->L()Z

    move-result v0

    if-nez v0, :cond_1

    .line 461
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/a/j;->b()V

    .line 463
    :cond_1
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 v0, 0x4

    if-ne v0, p1, :cond_0

    const/4 p1, 0x1

    return p1

    .line 471
    :cond_0
    invoke-super {p0, p1, p2}, Landroid/app/Activity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method protected onPause()V
    .locals 1

    .line 445
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    const/4 v0, 0x0

    .line 446
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->b:Z

    .line 447
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    if-eqz v0, :cond_0

    .line 448
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->s()V

    :cond_0
    return-void
.end method

.method protected onResume()V
    .locals 1

    .line 432
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    const/4 v0, 0x1

    .line 433
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->b:Z

    .line 434
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    if-eqz v0, :cond_0

    .line 435
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->r()V

    .line 437
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->c:Lcom/tkay/core/common/f/x;

    if-eqz v0, :cond_1

    .line 438
    invoke-virtual {v0, p0}, Lcom/tkay/core/common/f/x;->a(Landroid/app/Activity;)V

    const/4 v0, 0x0

    .line 439
    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->c:Lcom/tkay/core/common/f/x;

    :cond_1
    return-void
.end method

.method protected onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 3

    .line 391
    invoke-super {p0, p1}, Landroid/app/Activity;->onSaveInstanceState(Landroid/os/Bundle;)V

    .line 392
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    if-eqz v0, :cond_1

    .line 393
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->isShowEndCard()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    const-string v1, "extra_is_show_end_card"

    .line 395
    invoke-virtual {p1, v1, v0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 399
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->needHideFeedbackButton()Z

    move-result v0

    const-string v1, "extra_show_feedback_button"

    .line 401
    invoke-virtual {p1, v1, v0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 404
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->isVideoMute()Z

    move-result v0

    const-string v1, "extra_is_mute"

    .line 406
    invoke-virtual {p1, v1, v0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 409
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->hasReward()Z

    move-result v0

    const-string v1, "extra_has_reward_savestate"

    .line 411
    invoke-virtual {p1, v1, v0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 414
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->getShowBannerTime()J

    move-result-wide v0

    const-string v2, "extra_show_banner_time"

    .line 416
    invoke-virtual {p1, v2, v0, v1}, Landroid/os/Bundle;->putLong(Ljava/lang/String;J)V

    .line 419
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->getHideBannerTime()J

    move-result-wide v0

    const-string v2, "extra_hide_banner_time"

    .line 421
    invoke-virtual {p1, v2, v0, v1}, Landroid/os/Bundle;->putLong(Ljava/lang/String;J)V

    .line 424
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity;->i:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->getCloseButtonScaleFactor()F

    move-result v0

    const-string v1, "extra_close_view_scale"

    .line 426
    invoke-virtual {p1, v1, v0}, Landroid/os/Bundle;->putFloat(Ljava/lang/String;F)V

    :cond_1
    return-void
.end method

.method public setTheme(I)V
    .locals 2

    .line 478
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1a

    if-ne v0, v1, :cond_0

    const-string p1, "myoffer_half_screen_fit_by_o"

    const-string v0, "style"

    .line 479
    invoke-static {p0, p1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-super {p0, p1}, Landroid/app/Activity;->setTheme(I)V

    return-void

    .line 481
    :cond_0
    invoke-super {p0, p1}, Landroid/app/Activity;->setTheme(I)V

    return-void
.end method
