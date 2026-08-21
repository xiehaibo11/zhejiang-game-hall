.class public final Lcom/czhj/sdk/common/utils/SharedPreferencesUtil;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/String; = "com.sigmob.Settings"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sput-object p1, Lcom/czhj/sdk/common/utils/SharedPreferencesUtil;->a:Ljava/lang/String;

    return-void
.end method

.method public static getSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;
    .locals 2

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    sget-object v0, Lcom/czhj/sdk/common/utils/SharedPreferencesUtil;->a:Ljava/lang/String;

    const/4 v1, 0x4

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    return-object p0
.end method

.method public static getSharedPreferences(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences;
    .locals 1

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    const/4 v0, 0x4

    invoke-virtual {p0, p1, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    return-object p0
.end method
