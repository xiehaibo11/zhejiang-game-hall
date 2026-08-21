.class public interface abstract Lcom/ss/android/downloadad/api/constant/AdBaseConstants;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/constant/BaseConstants;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadad/api/constant/AdBaseConstants$DownloadConfigureName;,
        Lcom/ss/android/downloadad/api/constant/AdBaseConstants$FunnelType;,
        Lcom/ss/android/downloadad/api/constant/AdBaseConstants$OpenAppScene;,
        Lcom/ss/android/downloadad/api/constant/AdBaseConstants$DownloadScene;,
        Lcom/ss/android/downloadad/api/constant/AdBaseConstants$DownloadMode;,
        Lcom/ss/android/downloadad/api/constant/AdBaseConstants$LinkMode;,
        Lcom/ss/android/downloadad/api/constant/AdBaseConstants$ModelType;
    }
.end annotation


# static fields
.field public static final DOWNLOAD_AFTER_JUMP:I = 0x1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final DOWNLOAD_IMMEDIATELY:I = 0x0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final DOWNLOAD_OPEN_MARKET_WITH_BUTTON_AND_ITEM_CLICK:I = 0x3
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final DOWNLOAD_OPEN_MARKET_WITH_BUTTON_CLICK:I = 0x2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final DOWNLOAD_SCENE_DETAIL:I = 0x1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final DOWNLOAD_SCENE_NORMAL:I = 0x0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final ENABLE_DEEP_LINK_ONLY:I = 0x2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final ENABLE_NORMAL_AND_DEEP_LINK:I = 0x1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final ENABLE_NORMAL_LINK_ONLY:I = 0x0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final HTTP_DOMAIN_AD:Ljava/lang/String; = "https://i.snssdk.com/"

.field public static final HTTP_PATH_QUERY_SCHEME_LIST:Ljava/lang/String; = "api/ad/v1/scheme/query/"

.field public static final HTTP_PATH_REPORT_SCHEME_LIST:Ljava/lang/String; = "api/ad/v1/scheme/report/"

.field public static final MIME_APK:Ljava/lang/String; = "application/vnd.android.package-archive"

.field public static final RECOMMEND_EVENT_EXTRA_VALUE:I = 0x3

.field public static final STATUS_DOWNLOAD_FINISH:I = 0x2

.field public static final STATUS_START_DOWNLOAD:I = 0x1

.field public static final TYPE_GAME:I = 0x2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final TYPE_RECOMMEND_DOWNLOAD_MODEL:I = 0x1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field
