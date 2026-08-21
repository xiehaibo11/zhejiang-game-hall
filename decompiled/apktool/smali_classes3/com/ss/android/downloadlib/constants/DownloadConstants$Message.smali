.class public interface abstract annotation Lcom/ss/android/downloadlib/constants/DownloadConstants$Message;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/annotation/Annotation;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/constants/DownloadConstants;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2609
    name = "Message"
.end annotation

.annotation runtime Ljava/lang/annotation/Retention;
    value = .enum Ljava/lang/annotation/RetentionPolicy;->SOURCE:Ljava/lang/annotation/RetentionPolicy;
.end annotation


# static fields
.field public static final FROM_DOWNLOADER:I = 0x3

.field public static final QUICK_APP_BUTTON_CLICK:I = 0x4

.field public static final QUICK_APP_ITEM_CLICK:I = 0x5

.field public static final QUICK_APP_VIDEO_ITEM_CLICK:I = 0x7
