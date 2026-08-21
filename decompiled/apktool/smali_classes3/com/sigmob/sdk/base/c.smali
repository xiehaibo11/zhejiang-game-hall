.class public Lcom/sigmob/sdk/base/c;
.super Ljava/lang/Object;


# static fields
.field private static e:Lcom/sigmob/sdk/base/c;


# instance fields
.field private a:Z

.field private b:I

.field private c:Z

.field private d:I

.field private f:Z

.field private g:I

.field private h:Ljava/lang/Boolean;


# direct methods
.method private constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/c;->a:Z

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/c;->c:Z

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object v1

    const-string v2, "age_restricted_status"

    invoke-interface {v1, v2, v0}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/sigmob/sdk/base/c;->b:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :try_start_1
    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object v1

    const-string v2, "user_age"

    invoke-interface {v1, v2, v0}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/sigmob/sdk/base/c;->d:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :try_start_2
    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object v1

    const-string v2, "consent_status"

    invoke-interface {v1, v2, v0}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/sigmob/sdk/base/c;->g:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :catchall_2
    :try_start_3
    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object v1

    const-string v2, "gdpr_region"

    invoke-interface {v1, v2, v0}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/c;->f:Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    :catchall_3
    return-void
.end method

.method public static declared-synchronized a()Lcom/sigmob/sdk/base/c;
    .locals 2

    const-class v0, Lcom/sigmob/sdk/base/c;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/base/c;->e:Lcom/sigmob/sdk/base/c;

    if-nez v1, :cond_0

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance v1, Lcom/sigmob/sdk/base/c;

    invoke-direct {v1}, Lcom/sigmob/sdk/base/c;-><init>()V

    sput-object v1, Lcom/sigmob/sdk/base/c;->e:Lcom/sigmob/sdk/base/c;

    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1

    :cond_0
    :goto_0
    sget-object v1, Lcom/sigmob/sdk/base/c;->e:Lcom/sigmob/sdk/base/c;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit v0

    return-object v1

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private a(I)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;-><init>()V

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setAge(Ljava/lang/String;)V

    const-string p1, "401"

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setAc_type(Ljava/lang/String;)V

    const-string p1, "coppa"

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setSub_category(Ljava/lang/String;)V

    const-string p1, "privacy"

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setCategory(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->commit()V

    return-void
.end method

.method private a(Z)V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;-><init>()V

    const-string v1, "401"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setAc_type(Ljava/lang/String;)V

    const-string v1, "adult"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setSub_category(Ljava/lang/String;)V

    const-string v1, "privacy"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setCategory(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    const-string p1, "0"

    goto :goto_0

    :cond_0
    const-string p1, "1"

    :goto_0
    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setIs_minor(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->commit()V

    return-void
.end method

.method private b(I)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;-><init>()V

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setAge_restricted(Ljava/lang/String;)V

    const-string p1, "401"

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setAc_type(Ljava/lang/String;)V

    const-string p1, "coppa"

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setSub_category(Ljava/lang/String;)V

    const-string p1, "privacy"

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setCategory(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->commit()V

    return-void
.end method

.method private b(Z)V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;-><init>()V

    const-string v1, "401"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setAc_type(Ljava/lang/String;)V

    const-string v1, "personalized"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setSub_category(Ljava/lang/String;)V

    const-string v1, "privacy"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setCategory(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    const-string p1, "0"

    goto :goto_0

    :cond_0
    const-string p1, "1"

    :goto_0
    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setIs_unpersonalized(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->commit()V

    return-void
.end method

.method private j()V
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;-><init>()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/c;->g()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setUser_consent(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/c;->h()Z

    move-result v1

    const-string v2, "1"

    const-string v3, "0"

    if-eqz v1, :cond_0

    move-object v1, v2

    goto :goto_0

    :cond_0
    move-object v1, v3

    :goto_0
    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setGdpr_region(Ljava/lang/String;)V

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/sigmob/windad/consent/WindAdConsentInformation;->getInstance(Landroid/content/Context;)Lcom/sigmob/windad/consent/WindAdConsentInformation;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/windad/consent/WindAdConsentInformation;->isRequestLocationInEeaOrUnknown()Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_1

    :cond_1
    move-object v2, v3

    :goto_1
    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setGdpr_dialog_region(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    const-string v1, "consent"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setSub_category(Ljava/lang/String;)V

    const-string v1, "gdpr"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setCategory(Ljava/lang/String;)V

    const-string v1, "401"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->setAc_type(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobPrivacy;->commit()V

    return-void
.end method


# virtual methods
.method public a(IZ)V
    .locals 3

    iput p1, p0, Lcom/sigmob/sdk/base/c;->d:I

    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    iget v1, p0, Lcom/sigmob/sdk/base/c;->d:I

    const-string v2, "user_age"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    if-eqz p2, :cond_0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/c;->a(I)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/Boolean;)V
    .locals 3

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    const-string v2, "gdpr_region"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/c;->f:Z

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/c;->i()Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-direct {p0}, Lcom/sigmob/sdk/base/c;->j()V

    iget-boolean p1, p0, Lcom/sigmob/sdk/base/c;->c:Z

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/c;->b(Z)V

    iget-boolean p1, p0, Lcom/sigmob/sdk/base/c;->a:Z

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/c;->a(Z)V

    iget p1, p0, Lcom/sigmob/sdk/base/c;->b:I

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/c;->b(I)V

    iget p1, p0, Lcom/sigmob/sdk/base/c;->d:I

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/c;->a(I)V

    :cond_1
    return-void
.end method

.method public a(ZZ)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PrivacyManager -> setAdult "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/c;->a:Z

    if-eqz p2, :cond_0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/c;->a(Z)V

    :cond_0
    return-void
.end method

.method public b()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/c;->d:I

    return v0
.end method

.method public b(IZ)V
    .locals 3

    iput p1, p0, Lcom/sigmob/sdk/base/c;->b:I

    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    iget v1, p0, Lcom/sigmob/sdk/base/c;->b:I

    const-string v2, "age_restricted_status"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    if-eqz p2, :cond_0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/c;->b(I)V

    :cond_0
    return-void
.end method

.method public b(ZZ)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/c;->h:Ljava/lang/Boolean;

    if-nez v0, :cond_0

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/c;->h:Ljava/lang/Boolean;

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PrivacyManager -> setPersonalized "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/c;->c:Z

    if-eqz p2, :cond_1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/c;->b(Z)V

    :cond_1
    return-void
.end method

.method public c()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/c;->b:I

    return v0
.end method

.method public c(IZ)V
    .locals 2

    iput p1, p0, Lcom/sigmob/sdk/base/c;->g:I

    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "consent_status"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    if-eqz p2, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/c;->j()V

    :cond_0
    return-void
.end method

.method public d()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/c;->a:Z

    return v0
.end method

.method public e()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/c;->c:Z

    return v0
.end method

.method public f()Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/c;->h:Ljava/lang/Boolean;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    iget-boolean v1, p0, Lcom/sigmob/sdk/base/c;->c:Z

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public g()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/c;->g:I

    return v0
.end method

.method public h()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/c;->f:Z

    return v0
.end method

.method public i()Z
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/c;->g()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/c;->h()Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_1

    :cond_1
    return v1

    :cond_2
    :goto_1
    return v2
.end method
