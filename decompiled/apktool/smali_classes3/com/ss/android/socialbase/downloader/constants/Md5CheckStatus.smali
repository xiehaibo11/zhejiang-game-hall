.class public final enum Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

.field public static final enum INVALID_FILE_MD5_EMPTY:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

.field public static final enum INVALID_FILE_NO_EXIST:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

.field public static final enum INVALID_MD5_NOT_EQUALS:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

.field public static final enum VALID:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 9
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    const/4 v1, 0x0

    const-string v2, "VALID"

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->VALID:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    .line 10
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    const/4 v2, 0x1

    const-string v3, "INVALID_FILE_NO_EXIST"

    invoke-direct {v0, v3, v2}, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->INVALID_FILE_NO_EXIST:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    .line 11
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    const/4 v3, 0x2

    const-string v4, "INVALID_FILE_MD5_EMPTY"

    invoke-direct {v0, v4, v3}, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->INVALID_FILE_MD5_EMPTY:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    .line 12
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    const/4 v4, 0x3

    const-string v5, "INVALID_MD5_NOT_EQUALS"

    invoke-direct {v0, v5, v4}, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->INVALID_MD5_NOT_EQUALS:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    .line 8
    sget-object v6, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->VALID:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    aput-object v6, v5, v1

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->INVALID_FILE_NO_EXIST:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    aput-object v1, v5, v2

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->INVALID_FILE_MD5_EMPTY:Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->$VALUES:[Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 8
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;
    .locals 1

    .line 8
    const-class v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    return-object p0
.end method

.method public static values()[Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;
    .locals 1

    .line 8
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->$VALUES:[Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    invoke-virtual {v0}, [Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/ss/android/socialbase/downloader/constants/Md5CheckStatus;

    return-object v0
.end method
