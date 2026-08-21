.class public Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;
.super Ljava/lang/Object;
.source "HostSharedPreferences.java"


# static fields
.field public static final formal_login:Ljava/lang/String; = "formal_login"

.field public static final formal_login_type:Ljava/lang/String; = "formal_login_type"

.field public static final formal_sdk_config:Ljava/lang/String; = "formal_sdk_config"

.field public static final formal_sdk_config_type:Ljava/lang/String; = "formal_sdk_config_type"

.field public static final formal_trade:Ljava/lang/String; = "formal_trade"

.field public static final formal_trade_type:Ljava/lang/String; = "formal_trade_type"

.field public static final formal_ymn:Ljava/lang/String; = "formal_ymn"

.field public static final formal_ymn_type:Ljava/lang/String; = "formal_ymn_type"

.field public static final get_url_times:Ljava/lang/String; = "get_url_times"

.field public static final isFirst:Ljava/lang/String; = "isFirst"

.field public static final isGain:Ljava/lang/String; = "isGain"

.field public static final login_requested_times:Ljava/lang/String; = "login_requested_times"

.field public static final now_type:Ljava/lang/String; = "now_type"

.field private static volatile preferencesUtils:Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences; = null

.field public static final request_time:Ljava/lang/String; = "request_time"

.field public static final sdk_config_requested_times:Ljava/lang/String; = "sdk_config_requested_times"

.field private static final sp_name:Ljava/lang/String; = "hostSharePerference"

.field public static final spare_login:Ljava/lang/String; = "spare_login"

.field public static final spare_login_type:Ljava/lang/String; = "spare_login_type"

.field public static final spare_sdk_config:Ljava/lang/String; = "spare_sdk_config"

.field public static final spare_sdk_config_type:Ljava/lang/String; = "spare_sdk_config_type"

.field public static final spare_trade:Ljava/lang/String; = "spare_trade"

.field public static final spare_trade_type:Ljava/lang/String; = "spare_trade_type"

.field public static final spare_ymn:Ljava/lang/String; = "spare_ymn"

.field public static final spare_ymn_type:Ljava/lang/String; = "spare_ymn_type"

.field public static final trade_requested_times:Ljava/lang/String; = "trade_requested_times"

.field public static final ymn_requested_times:Ljava/lang/String; = "ymn_requested_times"


# instance fields
.field private sp:Landroid/content/SharedPreferences;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 43
    const-string v0, "hostSharePerference"

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    .line 44
    return-void
.end method

.method public static getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;

    .line 47
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->preferencesUtils:Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    if-nez v0, :cond_1

    .line 48
    const-class v0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    monitor-enter v0

    .line 49
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->preferencesUtils:Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    if-nez v1, :cond_0

    .line 50
    new-instance v1, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->preferencesUtils:Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    .line 52
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 54
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->preferencesUtils:Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    return-object v0
.end method


# virtual methods
.method public putData(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/String;

    .line 85
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 86
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 87
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 88
    return-void
.end method

.method public putHostEntity(Lcom/bianfeng/ymnsdk/hostaction/HostEntity;Ljava/lang/String;)V
    .locals 3
    .param p1, "entity"    # Lcom/bianfeng/ymnsdk/hostaction/HostEntity;
    .param p2, "type"    # Ljava/lang/String;

    .line 60
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 61
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_server_a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->getServer_a()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 62
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_server_b"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->getServer_b()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 63
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_server_a_weight"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->getServer_a_weight()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 64
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_server_b_weight"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->getServer_b_weight()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 65
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_is_mandatory"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->getIs_mandatory()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 66
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_request_times"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->getRequest_times()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 67
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 68
    return-void
.end method

.method public readData(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "key"    # Ljava/lang/String;

    .line 93
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    const-string v1, ""

    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public readHost(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/hostaction/HostEntity;
    .locals 5
    .param p1, "type"    # Ljava/lang/String;

    .line 72
    new-instance v0, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;-><init>()V

    .line 73
    .local v0, "hostEntity":Lcom/bianfeng/ymnsdk/hostaction/HostEntity;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_server_a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->setServer_a(Ljava/lang/String;)V

    .line 74
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_server_b"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->setServer_b(Ljava/lang/String;)V

    .line 75
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_server_a_weight"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "1"

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->setServer_a_weight(I)V

    .line 76
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_server_b_weight"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->setServer_b_weight(I)V

    .line 77
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_is_mandatory"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "0"

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->setIs_mandatory(I)V

    .line 78
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->sp:Landroid/content/SharedPreferences;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_request_times"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostEntity;->setRequest_times(I)V

    .line 79
    return-object v0
.end method
