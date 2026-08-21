.class public final enum Lcom/bianfeng/privategetui/PushNotification$PeriodType;
.super Ljava/lang/Enum;
.source "PushNotification.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/privategetui/PushNotification;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "PeriodType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bianfeng/privategetui/PushNotification$PeriodType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/bianfeng/privategetui/PushNotification$PeriodType;

.field public static final enum DAY:Lcom/bianfeng/privategetui/PushNotification$PeriodType;

.field public static final enum HOUR:Lcom/bianfeng/privategetui/PushNotification$PeriodType;

.field public static final enum WEEK:Lcom/bianfeng/privategetui/PushNotification$PeriodType;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 25
    new-instance v0, Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    const/4 v1, 0x0

    const-string v2, "HOUR"

    invoke-direct {v0, v2, v1}, Lcom/bianfeng/privategetui/PushNotification$PeriodType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/privategetui/PushNotification$PeriodType;->HOUR:Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    .line 26
    new-instance v0, Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    const/4 v2, 0x1

    const-string v3, "DAY"

    invoke-direct {v0, v3, v2}, Lcom/bianfeng/privategetui/PushNotification$PeriodType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/privategetui/PushNotification$PeriodType;->DAY:Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    .line 27
    new-instance v0, Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    const/4 v3, 0x2

    const-string v4, "WEEK"

    invoke-direct {v0, v4, v3}, Lcom/bianfeng/privategetui/PushNotification$PeriodType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/privategetui/PushNotification$PeriodType;->WEEK:Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    .line 24
    sget-object v5, Lcom/bianfeng/privategetui/PushNotification$PeriodType;->HOUR:Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    aput-object v5, v4, v1

    sget-object v1, Lcom/bianfeng/privategetui/PushNotification$PeriodType;->DAY:Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/bianfeng/privategetui/PushNotification$PeriodType;->$VALUES:[Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 24
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bianfeng/privategetui/PushNotification$PeriodType;
    .locals 1

    .line 24
    const-class v0, Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    return-object p0
.end method

.method public static values()[Lcom/bianfeng/privategetui/PushNotification$PeriodType;
    .locals 1

    .line 24
    sget-object v0, Lcom/bianfeng/privategetui/PushNotification$PeriodType;->$VALUES:[Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    invoke-virtual {v0}, [Lcom/bianfeng/privategetui/PushNotification$PeriodType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bianfeng/privategetui/PushNotification$PeriodType;

    return-object v0
.end method
