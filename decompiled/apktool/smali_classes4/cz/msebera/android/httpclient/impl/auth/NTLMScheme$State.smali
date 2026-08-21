.class final enum Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;
.super Ljava/lang/Enum;
.source "NTLMScheme.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcz/msebera/android/httpclient/impl/auth/NTLMScheme;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "State"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

.field public static final enum CHALLENGE_RECEIVED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

.field public static final enum FAILED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

.field public static final enum MSG_TYPE1_GENERATED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

.field public static final enum MSG_TYPE2_RECEVIED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

.field public static final enum MSG_TYPE3_GENERATED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

.field public static final enum UNINITIATED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    .line 52
    new-instance v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    const/4 v1, 0x0

    const-string v2, "UNINITIATED"

    invoke-direct {v0, v2, v1}, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->UNINITIATED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    .line 53
    new-instance v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    const/4 v2, 0x1

    const-string v3, "CHALLENGE_RECEIVED"

    invoke-direct {v0, v3, v2}, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->CHALLENGE_RECEIVED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    .line 54
    new-instance v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    const/4 v3, 0x2

    const-string v4, "MSG_TYPE1_GENERATED"

    invoke-direct {v0, v4, v3}, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->MSG_TYPE1_GENERATED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    .line 55
    new-instance v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    const/4 v4, 0x3

    const-string v5, "MSG_TYPE2_RECEVIED"

    invoke-direct {v0, v5, v4}, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->MSG_TYPE2_RECEVIED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    .line 56
    new-instance v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    const/4 v5, 0x4

    const-string v6, "MSG_TYPE3_GENERATED"

    invoke-direct {v0, v6, v5}, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->MSG_TYPE3_GENERATED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    .line 57
    new-instance v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    const/4 v6, 0x5

    const-string v7, "FAILED"

    invoke-direct {v0, v7, v6}, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->FAILED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    const/4 v0, 0x6

    .line 51
    new-array v0, v0, [Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    sget-object v7, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->UNINITIATED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    aput-object v7, v0, v1

    sget-object v1, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->CHALLENGE_RECEIVED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    aput-object v1, v0, v2

    sget-object v1, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->MSG_TYPE1_GENERATED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    aput-object v1, v0, v3

    sget-object v1, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->MSG_TYPE2_RECEVIED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    aput-object v1, v0, v4

    sget-object v1, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->MSG_TYPE3_GENERATED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    aput-object v1, v0, v5

    sget-object v1, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->FAILED:Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    aput-object v1, v0, v6

    sput-object v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->$VALUES:[Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 51
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;
    .locals 1

    .line 51
    const-class v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    return-object p0
.end method

.method public static values()[Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;
    .locals 1

    .line 51
    sget-object v0, Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->$VALUES:[Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    invoke-virtual {v0}, [Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcz/msebera/android/httpclient/impl/auth/NTLMScheme$State;

    return-object v0
.end method
