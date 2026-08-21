.class public Lcom/qihoo360/replugin/helper/HostConfigHelper;
.super Ljava/lang/Object;
.source "HostConfigHelper.java"


# static fields
.field public static ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE:I = 0x2

.field public static ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK:I = 0x3

.field public static ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP:I = 0x2

.field public static ACTIVITY_PIT_COUNT_NTS_STANDARD:I = 0x6

.field public static ACTIVITY_PIT_COUNT_TASK:I = 0x2

.field public static ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE:I = 0x3

.field public static ACTIVITY_PIT_COUNT_TS_SINGLE_TASK:I = 0x2

.field public static ACTIVITY_PIT_COUNT_TS_SINGLE_TOP:I = 0x2

.field public static ACTIVITY_PIT_COUNT_TS_STANDARD:I = 0x2

.field public static ACTIVITY_PIT_USE_APPCOMPAT:Z = false

.field public static ADAPTER_COMPATIBLE_VERSION:I = 0xa

.field public static ADAPTER_CURRENT_VERSION:I = 0xc

.field private static HOST_CONFIG_CLASS:Ljava/lang/Class; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field private static final HOST_CONFIG_FILE_NAME:Ljava/lang/String; = "RePluginHostConfig"

.field private static final HOST_CONFIG_FILE_PATH:Ljava/lang/String; = "com.qihoo360.replugin.gen."

.field public static PERSISTENT_ENABLE:Z = true

.field public static PERSISTENT_NAME:Ljava/lang/String; = ":GuardService"


# direct methods
.method static constructor <clinit>()V
    .locals 1

    :try_start_0
    const-string v0, "com.qihoo360.replugin.gen.RePluginHostConfig"

    .line 77
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/ReflectUtils;->getClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->HOST_CONFIG_CLASS:Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :try_start_1
    const-string v0, "PERSISTENT_ENABLE"

    .line 83
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    sput-boolean v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->PERSISTENT_ENABLE:Z
    :try_end_1
    .catch Ljava/lang/NoSuchFieldException; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :try_start_2
    const-string v0, "PERSISTENT_NAME"

    .line 89
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    sput-object v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->PERSISTENT_NAME:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/NoSuchFieldException; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :try_start_3
    const-string v0, "ACTIVITY_PIT_USE_APPCOMPAT"

    .line 95
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    sput-boolean v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_USE_APPCOMPAT:Z
    :try_end_3
    .catch Ljava/lang/NoSuchFieldException; {:try_start_3 .. :try_end_3} :catch_3

    :catch_3
    :try_start_4
    const-string v0, "ACTIVITY_PIT_COUNT_TS_STANDARD"

    .line 101
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_TS_STANDARD:I
    :try_end_4
    .catch Ljava/lang/NoSuchFieldException; {:try_start_4 .. :try_end_4} :catch_4

    :catch_4
    :try_start_5
    const-string v0, "ACTIVITY_PIT_COUNT_TS_SINGLE_TOP"

    .line 107
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_TS_SINGLE_TOP:I
    :try_end_5
    .catch Ljava/lang/NoSuchFieldException; {:try_start_5 .. :try_end_5} :catch_5

    :catch_5
    :try_start_6
    const-string v0, "ACTIVITY_PIT_COUNT_TS_SINGLE_TASK"

    .line 113
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_TS_SINGLE_TASK:I
    :try_end_6
    .catch Ljava/lang/NoSuchFieldException; {:try_start_6 .. :try_end_6} :catch_6

    :catch_6
    :try_start_7
    const-string v0, "ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE"

    .line 119
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE:I
    :try_end_7
    .catch Ljava/lang/NoSuchFieldException; {:try_start_7 .. :try_end_7} :catch_7

    :catch_7
    :try_start_8
    const-string v0, "ACTIVITY_PIT_COUNT_NTS_STANDARD"

    .line 125
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_NTS_STANDARD:I
    :try_end_8
    .catch Ljava/lang/NoSuchFieldException; {:try_start_8 .. :try_end_8} :catch_8

    :catch_8
    :try_start_9
    const-string v0, "ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP"

    .line 131
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP:I
    :try_end_9
    .catch Ljava/lang/NoSuchFieldException; {:try_start_9 .. :try_end_9} :catch_9

    :catch_9
    :try_start_a
    const-string v0, "ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK"

    .line 137
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK:I
    :try_end_a
    .catch Ljava/lang/NoSuchFieldException; {:try_start_a .. :try_end_a} :catch_a

    :catch_a
    :try_start_b
    const-string v0, "ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE"

    .line 143
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE:I
    :try_end_b
    .catch Ljava/lang/NoSuchFieldException; {:try_start_b .. :try_end_b} :catch_b

    :catch_b
    :try_start_c
    const-string v0, "ACTIVITY_PIT_COUNT_TASK"

    .line 149
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_TASK:I
    :try_end_c
    .catch Ljava/lang/NoSuchFieldException; {:try_start_c .. :try_end_c} :catch_c

    :catch_c
    :try_start_d
    const-string v0, "ADAPTER_COMPATIBLE_VERSION"

    .line 155
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ADAPTER_COMPATIBLE_VERSION:I
    :try_end_d
    .catch Ljava/lang/NoSuchFieldException; {:try_start_d .. :try_end_d} :catch_d

    :catch_d
    :try_start_e
    const-string v0, "ADAPTER_CURRENT_VERSION"

    .line 161
    invoke-static {v0}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->readField(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ADAPTER_CURRENT_VERSION:I
    :try_end_e
    .catch Ljava/lang/NoSuchFieldException; {:try_start_e .. :try_end_e} :catch_e

    :catch_e
    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static init()V
    .locals 0

    return-void
.end method

.method private static readField(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/NoSuchFieldException;
        }
    .end annotation

    .line 171
    :try_start_0
    sget-object v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->HOST_CONFIG_CLASS:Ljava/lang/Class;

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readStaticField(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 176
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0, p0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method
