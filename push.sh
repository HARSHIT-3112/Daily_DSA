#!/bin/bash

# Navigate to your DSA folder (optional but recommended)
cd /Users/harshit/Desktop/placement/__DSA__

# Add all changes
git add .

# Commit with a predefined message including date
git commit -m "Updated DSA solutions - $(date '+%Y-%m-%d')"

# Push to GitHub
git push origin main

echo "✅ DSA solutions pushed successfully on $(date '+%Y-%m-%d %H:%M:%S')!"
